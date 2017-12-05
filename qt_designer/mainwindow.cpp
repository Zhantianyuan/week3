#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QmessageBox"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),ui(new Ui::MainWindow) {
ui->setupUi(this);

	// Your code here to connect button signals ...

	// Connect the released() signal of the addButton object to the handleAddButton slot in this object
	connect( ui->addButton, &QPushButton::released, this, &MainWindow::handleAddButton );

	// Connect the statusUpdateMessage() signal to the showMessage() slot of the status bar
	connect( this, &MainWindow::statusUpdateMessage, ui->statusBar, &QStatusBar::showMessage );
}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleAddButton() {
	// This causes MainWindow to emit the signal that will then be
	// received by the statusbar's slot
	emit statusUpdateMessage( QString("Add button was clicked"), 0 );
}