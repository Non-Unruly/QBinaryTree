#include "QBinaryTreeView.h"

QBinaryTreeView::QBinaryTreeView(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);

	m_view = new QGraphicsView(this);
	m_view->setRenderHints(QPainter::Antialiasing | QPainter::SmoothPixmapTransform);

	m_scene = new QGraphicsScene(this);
	m_view->setScene(m_scene);

	generate_graph();
}

QBinaryTreeView::~QBinaryTreeView()
{
}

void QBinaryTreeView::Load(std::vector<int> data)
{
	m_data = QVector<int>::fromStdVector(data);
}

void QBinaryTreeView::generate_graph()
{
	BTNodeItem *item = new BTNodeItem(0, 0, 50);
	item->SetText("100");
	m_items << item;
	m_scene->addItem(item);
}

void QBinaryTreeView::adjustView()
{
	m_view->resize(this->size());
	m_scene->setSceneRect(m_view->rect());
}

void QBinaryTreeView::resizeEvent(QResizeEvent * event)
{
	adjustView();
}

void QBinaryTreeView::showEvent(QShowEvent * event)
{
	adjustView();
}
