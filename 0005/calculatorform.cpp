
#include "calculatorform.h"
#include <QWidget>

CalculatorForm::CalculatorForm(QWidget *parent)
    : QWidget(parent)
{
    setupUi(this);
}

void CalculatorForm::on_inputSpinBox1_valueChanged(int value)
{
    outputWidget->setText(QString::number(value + inputSpinBox2->value()));
}

void CalculatorForm::on_inputSpinBox2_valueChanged(int value)
{
    outputWidget->setText(QString::number(value + inputSpinBox1->value()));
}
