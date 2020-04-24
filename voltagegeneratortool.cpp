#include "voltagegeneratortool.h"
#include "ui_voltagegeneratortool.h"

VoltageGeneratorTool::VoltageGeneratorTool(QWidget *parent) :
   QMainWindow(parent),
   ui(new Ui::VoltageGeneratorTool)
{
    ui->setupUi(this);

    //Setup basic x-axis and y-axis of Voltage output
    // TODO save these settings in some config file/json for app restart.
    setupPlot();

    //Create plot axes

    connect(ui->plot->xAxis,SIGNAL(rangeChanged(QCPRange)),this,\
                            SLOT(xAxisChanged(QCPRange)));
}

VoltageGeneratorTool::~VoltageGeneratorTool()
{
    delete ui;
}

void setupPlot(){


}
