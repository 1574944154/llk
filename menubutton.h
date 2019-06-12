#ifndef MENUBUTTON_H
#define MENUBUTTON_H

#include <QObject>

class MenuButton : public QObject
{
    Q_OBJECT
public:
    explicit MenuButton(QObject *parent = nullptr);

signals:

public slots:
};

#endif // MENUBUTTON_H