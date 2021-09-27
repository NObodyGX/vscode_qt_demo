#include <QApplication>
#include <QFile>

#include "src/windows/mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QFile styleFile(":/resource/qss/label.qss");
	if (styleFile.open(QIODevice::ReadOnly)) {
		QString string = styleFile.readAll();
		qApp->setStyleSheet(string);
	}

    MainWindow w;
    w.show();
    return a.exec();
}
