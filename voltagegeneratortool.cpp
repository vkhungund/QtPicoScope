#include "voltagegeneratortool.h"
#include "ui_voltagegeneratortool.h"

#include <QtMath>

VoltageGeneratorTool::VoltageGeneratorTool(QWidget *parent) :
   QMainWindow(parent),
   ui(new Ui::VoltageGeneratorTool)
{
    ui->setupUi(this);

    updateWaveform();
    populatePicoscopes();
}

VoltageGeneratorTool::~VoltageGeneratorTool()
{
    delete ui;
}


void VoltageGeneratorTool::updateWaveform()
{
    //Create a series data
    QLineSeries *inpData= new QLineSeries();
    for(int i = 0;i < 500 ; ++i) {
        *inpData<<QPointF(i,qSin(2*M_PI*i/500)*5);
    }

    //Create the Chart
    QChart *chart = new QChart();
    chart->legend()->hide();
    chart->addSeries(inpData);
    chart->createDefaultAxes();
    chart->setTitle("Expected & Actual Waveforms");
    chart->setY(5.2);

    //Create view
    QChartView *chartViewWaveform = new QChartView(chart);
    chartViewWaveform->setRenderHint(QPainter::Antialiasing);

    //Attach it to our showWaveform widget
    QGridLayout *grid = new QGridLayout;
    grid->addWidget(chartViewWaveform);
    ui->showWaveform->setLayout(grid);

}

void VoltageGeneratorTool::populatePicoscopes()
{
    QStringList picoscopes;
    picoscopes<<"4424"<<\
                "5203"<<\
                "4444";
    ui->comboBoxDevice->addItems(picoscopes);
}

