#include "AnimationWidget.h"
#include <QPainter>

AnimationWidget::AnimationWidget(QWidget *parent)
    : QWidget(parent)
{
}

AnimationWidget::~AnimationWidget()
{

}

void AnimationWidget::initUi()
{
    m_label = new QLabel(this);
    m_label->setStyleSheet("QLabel{background:red;}");
    m_label->setFixedSize(100, 100);
    m_posAni = new QPropertyAnimation(m_label,"pos", m_label);
    m_posAni->setDuration(5000);
    m_posAni->setEasingCurve(QEasingCurve::Linear);
    m_posAni->setStartValue(this->frameGeometry().topLeft());
    m_posAni->setEndValue(this->frameGeometry().bottomRight());
    m_posAni->start();
}

void AnimationWidget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setRenderHints(QPainter::SmoothPixmapTransform | QPainter::Antialiasing);
    QPen pen;
    pen.setWidth(2);
    pen.setColor(Qt::red);
    painter.setPen(pen);
    painter.drawLine(QLineF(this->frameGeometry().topLeft(), this->frameGeometry().bottomRight()));
}

void AnimationWidget::resizeEvent(QResizeEvent *event)
{
    initUi();
    return QWidget::resizeEvent(event);
}
