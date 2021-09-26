#include "./mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    wi = new VideoWidget(this);
    layout = new QVBoxLayout(this);
    layout->addWidget(wi);
    setLayout(layout);
}

MainWindow::~MainWindow()
{
}

