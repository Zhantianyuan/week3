#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "stockitemlistmodel.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
Q_OBJECT
signals:
	void statusUpdateMessage( const QString & message, int timeout );


public slots:
     void handleAddButton();
     void handleEditButton();
     void handleRemoveButton();


public:
	explicit MainWindow(QWidget * parent = 0);
	~MainWindow();


private:
	Ui::MainWindow * ui;
	StockItemListModel stockList;


};
#endif // MAINWINDOW_H