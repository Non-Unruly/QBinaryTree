#ifndef _Q_BINARY_TREE_VIEW_H_
#define _Q_BINARY_TREE_VIEW_H_

#include <string>
#include <vector>

#include <qdebug.h>
#include <QtWidgets/QWidget>
#include <qgraphicsview.h>
#include <qgraphicsitem.h>
#include <qvector.h>
#include <qevent.h>

#include "BTNodeItem.h"

#include "ui_QBinaryTreeView.h"

class QBinaryTreeView : public QWidget
{
    Q_OBJECT

public:
    QBinaryTreeView(QWidget *parent = Q_NULLPTR);
	~QBinaryTreeView();
	
	void Load(std::vector<int> data);

private:
	QGraphicsView *m_view;
	QGraphicsScene *m_scene;
	QVector<QGraphicsEllipseItem*> m_items;

private:
    Ui::QBinaryTreeViewClass ui;

	QVector<int> m_data;

	void generate_graph();

protected:
	void adjustView();
	void resizeEvent(QResizeEvent *event);
	void showEvent(QShowEvent *event);
};

#endif
