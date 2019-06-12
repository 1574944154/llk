#ifndef MAINWINDOWS_H
#define MAINWINDOWS_H

#include <QWidget>

namespace Ui {
class MainWindows;
}

class MainWindows : public QWidget
{
    Q_OBJECT

public:
    explicit MainWindows(QWidget *parent = nullptr);
    ~MainWindows();

private:
    Ui::MainWindows *ui;
};

#endif // MAINWINDOWS_H
