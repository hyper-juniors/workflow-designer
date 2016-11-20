#include <QApplication>

#include "mainwindow.h"

#define DESIGNER_VERSION   "0.1.0"

int main(int argc, char *argv[])
{
    Q_INIT_RESOURCE(designer);

    QApplication app(argc, argv);

    QCoreApplication::setOrganizationName("Star-Workflow");
    QCoreApplication::setApplicationName("WorkflowDesigner");
    QCoreApplication::setApplicationVersion(DESIGNER_VERSION);

    MainWindow mainWin;
    mainWin.show();

    return app.exec();
}
