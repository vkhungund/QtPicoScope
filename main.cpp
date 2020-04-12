#include "voltagegeneratortool.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    VoltageGeneratorTool w;
    w.show();

    return a.exec();
}
