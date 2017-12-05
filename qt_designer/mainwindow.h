#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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


public:
	explicit MainWindow(QWidget * parent = 0);
	~MainWindow();


private:
	Ui::MainWindow * ui;



};
#endif // MAINWINDOW_H