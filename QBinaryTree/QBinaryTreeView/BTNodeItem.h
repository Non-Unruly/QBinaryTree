#ifndef _BT_NODE_ITEM_H_
#define _BT_NODE_ITEM_H_

#include <qgraphicsitem.h>
#include <qstring.h>
#include <qfont.h>
#include <qdebug.h>

class BTNodeItem :	public QGraphicsEllipseItem
{
public:
	BTNodeItem(int x, int y, int radius, QString text = "", QGraphicsItem *parent = nullptr);

	void SetRadius(int r);
	void SetText(QString text);

private:
	QString m_text;

	QGraphicsTextItem *m_text_item;
};

#endif

