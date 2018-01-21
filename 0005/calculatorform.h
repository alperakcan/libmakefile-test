
#ifndef CALCULATORFORM_H
#define CALCULATORFORM_H

#include ".multipleinheritance/ui_calculatorform.h"

class CalculatorForm : public QWidget, private Ui::CalculatorForm
{
    Q_OBJECT

public:
    explicit CalculatorForm(QWidget *parent = nullptr);

private slots:
    void on_inputSpinBox1_valueChanged(int value);
    void on_inputSpinBox2_valueChanged(int value);
};

#endif
