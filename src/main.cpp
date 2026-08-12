#include <QApplication>
#include "gui/CopyCATWindow.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    CopyCATWindow window;
    window.show();

    return app.exec();
}
