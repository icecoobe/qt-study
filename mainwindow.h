#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "track.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_clicked();

private:
    Ui::MainWindow *ui;
    Track *track_;

};
#endif // MAINWINDOW_H
