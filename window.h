#ifndef WINDOW_H
#define WINDOW_H

#include <QWidget>
#include "area.h"
#include <QPushButton>

class Window : public QWidget
{
    Q_OBJECT                                        // Подключение сигналов и слотов

protected:
    Area * area;                                    // Область рисунка
    QPushButton * btn;                              // Кнопка выхода

public:
    Window(QWidget *parent = nullptr);

};

#endif
