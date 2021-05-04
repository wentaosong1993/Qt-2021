#ifndef ANIMATIONWIDGET_H
#define ANIMATIONWIDGET_H

#include <QWidget>
#include <QLabel>
#include <QPropertyAnimation>

class AnimationWidget : public QWidget
{
    Q_OBJECT

public:
    AnimationWidget(QWidget *parent = 0);
    ~AnimationWidget();

    void initUi();

protected:
    void paintEvent(QPaintEvent *event);
    void resizeEvent(QResizeEvent *event);

private:
    QLabel *m_label;
    QPropertyAnimation *m_posAni;
};

#endif // ANIMATIONWIDGET_H
