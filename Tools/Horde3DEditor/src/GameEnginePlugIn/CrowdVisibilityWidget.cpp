#include "CrowdVisibilityWidget.h"
#include <QXmlTree/QXmlTreeNode.h>

#include <GameEngine/GameEngine.h>

// This file is not in the SVN. It is supposed to contain PREPROCESSOR definitions for individual
// parts in the GameEnginePlugIn not released to the public
// If you don't know what I'm talking about, just create an empty Config.h file in the GameEnginePlugIn directory
#include "Config.h"

#ifdef UNI_AUGSBURG
#include <GameEngine/GameEngine_CrowdSim.h>
#endif

CrowdVisibilityWidget::CrowdVisibilityWidget(QWidget* parent /*= 0*/, Qt::WFlags flags /*= 0*/) : QWidget(parent, flags), m_currentNode(0)
{
	setupUi(this);

#ifdef UNI_AUGSBURG
	m_simSpeed->setValue( GameEngine::crowdSimSpeed() );
	m_minTargetDist->setValue( GameEngine::crowdSimMinTargetDist() );
	m_crowdSim->setChecked( GameEngine::crowdSimEnabled() );
#endif UNI_AUGSBURG

	connect(m_tag, SIGNAL(valueChanged ( int )), this, SLOT(updateTag( int )));
	connect(m_crowdSim, SIGNAL(toggled(bool)), this, SLOT(updateCrowdSim()));
	connect(m_simSpeed, SIGNAL(valueChanged(double)), this, SLOT(updateCrowdSim()));
	connect(m_minTargetDist, SIGNAL(valueChanged(double)), this, SLOT(updateCrowdSim()));

	connect(m_minWait, SIGNAL(valueChanged(double)), this, SLOT(updateTimes()));
	connect(m_maxWait, SIGNAL(valueChanged(double)), this, SLOT(updateTimes()));
}


CrowdVisibilityWidget::~CrowdVisibilityWidget()
{
}

void CrowdVisibilityWidget::updateTag( int tag )
{
#ifdef UNI_AUGSBURG
	if( m_currentNode == 0x0 ) return;
	
	QString entityName = m_currentNode->xmlNode().parentNode().toElement().attribute("name");

	m_currentNode->xmlNode().setAttribute("tag", m_tag->value() );

	unsigned int entityID = GameEngine::entityWorldID( qPrintable( entityName ) );
	GameEngine::setCrowdInjectorTag( entityID, tag ); 
#endif
}

void CrowdVisibilityWidget::updateTimes()
{
#ifdef UNI_AUGSBURG
	if( m_currentNode == 0x0 ) return;

	m_currentNode->xmlNode().setAttribute("injectorWaitMin", m_minWait->value() );
	m_currentNode->xmlNode().setAttribute("injectorWaitMax", m_maxWait->value() );

	QString entityName = m_currentNode->xmlNode().parentNode().toElement().attribute("name");
	unsigned int entityID = GameEngine::entityWorldID( qPrintable( entityName ) );
	
	GameEngine::setCrowdInjectorWait( entityID, m_minWait->value(), m_maxWait->value() ); 
#endif
}

void CrowdVisibilityWidget::updateCrowdSim()
{
#ifdef UNI_AUGSBURG
	if( m_currentNode != 0 )
	{
		GameEngine::enableCrowdSim( m_crowdSim->isChecked() );
		GameEngine::setCrowdSimSpeed( m_simSpeed->value() );
		GameEngine::setCrowdSimMinTargetDist( m_minTargetDist->value() );
	}
#endif
}

bool CrowdVisibilityWidget::setCurrentNode(QXmlTreeNode* node)
{	
#ifdef UNI_AUGSBURG
	if (node && (node->xmlNode().tagName() == "CrowdVisNode") )
	{
		m_currentNode = 0;

		m_minWait->setValue(node->xmlNode().attribute("injectorWaitMin").toFloat());
		m_maxWait->setValue(node->xmlNode().attribute("injectorWaitMax").toFloat());
		
		m_crowdSim->setChecked( GameEngine::crowdSimEnabled() );
		m_simSpeed->setValue( GameEngine::crowdSimSpeed() );
		m_minTargetDist->setValue( GameEngine::crowdSimMinTargetDist() );

		m_tag->setValue(node->xmlNode().attribute("tag").toInt());
		m_currentNode = node;
		return true;
	}
	else
#endif
		return false;
}


