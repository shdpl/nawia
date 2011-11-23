/****************************************************************************
**
** Copyright (C) 2009 Nokia Corporation and/or its subsidiary(-ies).
** Contact: Qt Software Information (qt-info@nokia.com)
**
** This file is part of the demonstration applications of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial Usage
** Licensees holding valid Qt Commercial licenses may use this file in
** accordance with the Qt Commercial License Agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Nokia.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Nokia gives you certain
** additional rights. These rights are described in the Nokia Qt LGPL
** Exception version 1.0, included in the file LGPL_EXCEPTION.txt in this
** package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
** If you are unsure which license is appropriate for your use, please
** contact the sales department at qt-sales@nokia.com.
** $QT_END_LICENSE$
**
****************************************************************************/
module autosaver;


import qt.core.QObject;
import qt.core.QBasicTimer;
import qt.core.QTime;
import qt.core.QDir;
import qt.core.QCoreApplication;
//import qt.core.QMetaObject;

//import QtDebug;


const uint AUTOSAVE_IN  = 1000 * 3;  // seconds
const uint MAXWAIT = 1000 * 15; // seconds


/*
This class will call the save() slot on the parent object when the parent changes.
It will wait several seconds after changed() to combining multiple changes and
prevent continuous writing to disk.
*/

class AutoSaver : public QObject {

public:

	this(QObject parent)
	{
		super(parent);
		assert(parent);
	}
	
	~this()
	{
		if (m_timer.isActive())
			qWarning("AutoSaver: still active when destroyed, changes not saved.");
	}
	
	void saveIfNeccessary()
	{
		if (!m_timer.isActive())
			return;
		m_timer.stop();
		m_firstChange = new QTime();
		
		//TODO!
		//if (!QMetaObject.invokeMethod(parent(), "save", Qt.DirectConnection)) {
		//	qWarning("AutoSaver: error invoking slot save() on parent");
		//}
	}

public:

	void changeOccurred()
	{
		if (m_firstChange.isNull())
			m_firstChange.start();

		if (m_firstChange.elapsed() > MAXWAIT) {
			saveIfNeccessary();
		} else {
			m_timer.start(AUTOSAVE_IN, this);
		}
	}

protected:

	void timerEvent(QTimerEvent event)
	{
		if (event.timerId() == m_timer.timerId()) {
			saveIfNeccessary();
		} else {
			super.timerEvent(event);
		}
	}

private:

	QBasicTimer m_timer;
	QTime m_firstChange;
}
