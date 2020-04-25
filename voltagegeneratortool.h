#ifndef VOTTAGEGENERATORTOOL_H
#define VOTTAGEGENERATORTOOL_H

#include <QMainWindow>
#include <QtCharts/QChartView>
#include <QtCharts/QLineSeries>

QT_BEGIN_NAMESPACE
namespace Ui {
class VoltageGeneratorTool;
}
QT_END_NAMESPACE

QT_CHARTS_USE_NAMESPACE

class VoltageGeneratorTool : public QMainWindow
{
    Q_OBJECT

public:
    VoltageGeneratorTool(QWidget *parent = nullptr);
    ~VoltageGeneratorTool();
    void updateWaveform();
    void populatePicoscopes();

private:
    Ui::VoltageGeneratorTool *ui;
    QChartView *m_chartShowWaveform;

};

#endif // VOTTAGEGENERATORTOOL_H
