#include "TextWidget.h"
#include "ui_TextWidget.h"

#include <QDialog>
#include <QEventLoop>

TextWidget::TextWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TextWidget)
{
    ui->setupUi(this);
}

TextWidget::~TextWidget()
{
    delete ui;
}

void TextWidget::on_pushButton_clicked()
{
    QDialog dlg;
    dlg.show();

    QEventLoop loop;
    loop.exec();


}
