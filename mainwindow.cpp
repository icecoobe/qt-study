#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //track_ = new Track(ui->centralwidget);
    //ui->centralwidget->layout()->addWidget(track_);
//    ui->track_->setMinimumHeight(300);
//    ui->track_->setMinimumWidth(400);


    ui->track_->setInteractions(QCP::iRangeDrag | QCP::iRangeZoom);
    //connect(ui->btnAudio, SIGNAL(clicked()), this, SLOT(on_clicked()));
    connect(ui->btnAudio, &QPushButton::clicked, this, &MainWindow::on_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_clicked()
{
    QString path = QApplication::applicationDirPath() + "//zh.wav";
    qDebug() << path;
    ui->track_->setSource(QDir::cleanPath(path));
}

