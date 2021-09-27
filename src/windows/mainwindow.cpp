
#include <QLabel>
#include <QPixmap>
#include <QWidget>

#include "mainwindow.h"
#include "src/widgets/video_widget.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{

    QWidget* centralWidget = new QWidget(this);
    centralWidget->setObjectName("centralWidget");
    setCentralWidget(centralWidget);

    VideoWidget* wi = new VideoWidget(this);
    QLabel* lb = new QLabel(this);
    QImage *img = new QImage();
    img->load(":resource/images/open.png");
    lb->setPixmap(QPixmap::fromImage(*img));
    layout = new QVBoxLayout(centralWidget);
    layout->addWidget(wi);
    layout->addWidget(lb);
    centralWidget->setLayout(layout);
}

MainWindow::~MainWindow()
{
}

