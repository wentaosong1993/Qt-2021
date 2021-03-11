﻿#ifndef TEXTWIDGET_H
#define TEXTWIDGET_H

#include <QWidget>

namespace Ui {
class TextWidget;
}

class TextWidget : public QWidget
{
    Q_OBJECT

public:
    explicit TextWidget(QWidget *parent = 0);
    ~TextWidget();

private slots:
    void on_pushButton_clicked();

private:
    Ui::TextWidget *ui;
};

#endif // TEXTWIDGET_H
