
#ifndef PUSHBUTTON_H
#define PUSHBUTTON_H
#include "QPushButton"
#include <QCommandLinkButton>


class CustomButton : public QPushButton
{
public:
    CustomButton(QWidget *parent = NULL);
    ~CustomButton();

protected:

private:
};

#endif // PUSHBUTTON_H
