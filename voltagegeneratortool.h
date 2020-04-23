#ifndef VOTTAGEGENERATORTOOL_H
#define VOTTAGEGENERATORTOOL_H

#include <QMainWindow>
#include <qcustomplot.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class VoltageGeneratorTool;
}
QT_END_NAMESPACE

class VoltageGeneratorTool : public QMainWindow
{
    Q_OBJECT

public:
    explicit VoltageGeneratorTool(QWidget *parent = nullptr);
    void setupPlot();
    ~VoltageGeneratorTool();

private slots:
    //void xAxisChanged(QCPRange range);
    //void yAxisChanged(QCPRange range);

private:
    Ui::VoltageGeneratorTool *ui;
};

#endif // VOTTAGEGENERATORTOOL_H
