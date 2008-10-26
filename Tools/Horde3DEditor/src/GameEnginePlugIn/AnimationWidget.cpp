#include "AnimationWidget.h"

#include "QXmlTreeNode.h"
#include "AnimationController.h"

#include <Qt/qfiledialog.h>
#include <Qt/qdir.h>
#include <Qt/qmessagebox.h>

#include <GameEngine/GameEngine.h>
#include <GameEngine/Animation.h>

AnimationWidget::AnimationWidget(QWidget* parent /*= 0*/, Qt::WFlags flags /*= 0*/) : QFrame(parent, flags), m_currentNode(0)
{
	setupUi(this);
	connect(m_stage, SIGNAL(currentIndexChanged(int)), this, SLOT(activateAnimation(int)));
	connect(m_weight, SIGNAL(valueChanged(double)), this, SLOT(setWeight(double)));
	connect(m_addAnimButton, SIGNAL(clicked()), this, SLOT(addAnimation()));
	connect(m_animations, SIGNAL(currentIndexChanged(int)), this, SLOT(animationChanged(int)));
	connect(m_removeAnimButton, SIGNAL(clicked()), this, SLOT(removeAnimation()));
}


AnimationWidget::~AnimationWidget()
{
	m_animations->blockSignals(true);
	while (m_animations->count() > 0)
	{
		delete static_cast<AnimationController*>(m_animations->itemData(0).value<void*>());
		m_animations->removeItem(0);
	}	
}

void AnimationWidget::setCurrentNode(QXmlTreeNode* node)
{
	blockSignals(true);
	m_currentNode = node;
	m_addAnimButton->setEnabled(m_currentNode != 0);
	m_animations->blockSignals(true);
	while (m_animations->count() > 0)
	{
		delete static_cast<AnimationController*>(m_animations->itemData(0).value<void*>());
		m_animations->removeItem(0);
	}	
	m_animations->blockSignals(false);
	if (m_currentNode)
	{
		QDomNodeList animations = node->attachment().elementsByTagName("Animation");
		for (int i=0; i<animations.count(); ++i)
			m_animations->addItem(animations.at(i).toElement().attribute("name")); 				
	}
	blockSignals(false);
}


void AnimationWidget::activateAnimation(int stage)
{
	if (stage == -1 || m_animations->currentIndex() == -1)
		return;
	Animation anim(GameEngine::getAnimation(qPrintable(m_currentNode->xmlNode().attribute("name")), qPrintable(m_animations->currentText())));
	if (anim.isNull())
	{
		QMessageBox::warning(this, tr("Error"), tr("Error loading animation: %1").arg(m_animations->currentText()));
		return;
	}
	AnimationController* controller = static_cast<AnimationController*>(m_animations->itemData(m_animations->currentIndex()).value<void*>());
	if (stage == 0)
	{
		delete controller;
		m_animations->setItemData(m_animations->currentIndex(), QVariant());
	}
	else
	{				
		if (!controller)
		{			
			controller = new AnimationController(m_currentNode->xmlNode().attribute("name"), m_animations->currentText());
			m_animations->setItemData(m_animations->currentIndex(), QVariant::fromValue<void*>(controller));
		}		
		anim.setStage(m_stage->currentText().toInt());
		anim.setWeight(m_weight->value() == 0 ? -1.0f : m_weight->value());
		controller->start(anim.fps());				
	}
}

void AnimationWidget::addAnimation()
{
	QStringList animations = QFileDialog::getOpenFileNames(
		this, 
		tr("Select animation(s)"), 
		GameEngine::getResourceDirectory(GameEngine::AnimationFiles), 
		tr("Animation files (*.anim);;All files (*.*)"));	
	QString animation;
	foreach(animation, animations)
	{		
		animation = QDir(GameEngine::getResourceDirectory(GameEngine::AnimationFiles)).relativeFilePath(animation);
		QDomElement anim = m_currentNode->attachment().appendChild(m_currentNode->attachment().toDocument().createElement("Animation")).toElement();		
		anim.setAttribute("file", animation);
		anim.setAttribute("name", animation.left(animation.indexOf(".")));
		anim.setAttribute("fps", 30);
		GameEngine::addAnimation(qPrintable(m_currentNode->xmlNode().attribute("name")), qPrintable(anim.attribute("name")), qPrintable(anim.attribute("file")));
		m_animations->addItem(anim.attribute("name"));		
		m_animations->setCurrentIndex(m_animations->count()-1);
		emit modified(true);
	}
}

void AnimationWidget::removeAnimation()
{
	const int currentIndex = m_animations->currentIndex();
	QDomNodeList animations = m_currentNode->attachment().elementsByTagName("Animation");
	for (int i=0; i<animations.count(); ++i)
	{
		if (animations.at(i).toElement().attribute("name").compare(m_animations->currentText())==0)
		{
			m_currentNode->attachment().removeChild(animations.at(i));
			AnimationController* controller = static_cast<AnimationController*>(m_animations->itemData(currentIndex).value<void*>());
			delete controller;
			m_animations->removeItem(currentIndex);
			break;
		}			
	}
}

void AnimationWidget::animationChanged(int index)
{
	bool interactiveAnimation = m_animations->currentText().compare("Interactive", Qt::CaseInsensitive) == 0;
	m_removeAnimButton->setDisabled(interactiveAnimation || m_animations->currentText().isEmpty() || m_currentNode==0);	
	Animation anim(GameEngine::getAnimation(qPrintable(m_currentNode->xmlNode().attribute("name")), qPrintable(m_animations->currentText())));
	m_stage->setDisabled(anim.isNull());
	if (!anim.isNull())
	{
		m_stage->blockSignals(true);
		m_weight->blockSignals(true);
		m_stage->setCurrentIndex(anim.stage()+1); // add one for the disabled state
		m_weight->setValue(anim.weight() < 0 ? 0.0f : anim.weight());
		m_weight->blockSignals(false);
		m_stage->blockSignals(false);
	}
}

void AnimationWidget::setWeight(double value)
{
	if (m_animations->currentIndex() == -1)
		return;	
	GameEngine::getAnimation(qPrintable(m_currentNode->xmlNode().attribute("name")), qPrintable(m_animations->currentText())).setWeight(value == 0 ? -1.0f : value);
}