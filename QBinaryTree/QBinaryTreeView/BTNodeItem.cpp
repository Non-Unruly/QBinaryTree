#include "BTNodeItem.h"

BTNodeItem::BTNodeItem(int x, int y, int radius, QString text, QGraphicsItem * parent)
	:QGraphicsEllipseItem(x, y, radius, radius, parent)
{
	QGraphicsRectItem* rect_item = new QGraphicsRectItem(0, 0, radius, radius, this);
	m_text_item = new QGraphicsTextItem(this);
	SetText(text);
}

void BTNodeItem::SetRadius(int r)
{
	this->SetRadius(r);
}

void BTNodeItem::SetText(QString text)
{
	m_text = text;
	if (m_text_item != nullptr)
	{	
		QFont font("consoles", 10, QFont::Bold);
		m_text_item->setFont(font);
		m_text_item->setPlainText(m_text);
		auto rect = m_text_item->boundingRect();
		qDebug() << this->rect() << rect;
		m_text_item->moveBy((this->rect().width() - rect.width()) / 6, (this->rect().height() - rect.height()) / 4);
	}
}
