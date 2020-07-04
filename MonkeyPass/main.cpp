#include "monkeypass.h"
#include <QApplication>
#include <QStandardPaths>
#include "configuration.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setQuitOnLastWindowClosed(false);
    a.setOrganizationDomain(Configuration::organization);
    a.setApplicationName(Configuration::applicationName);
    a.setApplicationVersion(Configuration::applicationVersion);

    MonkeyPass mainWindow;
    mainWindow.show();

    return a.exec();
}
