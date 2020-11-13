#include"Autre_Drapeau.h"

Autre_drapeau:: Autre_drapeau(QWidget *parent): QWidget(parent)
{

}
Autre_drapeau::Autre_drapeau(QString chemin, QString title)
{
    label->setPixmap(QPixmap(chemin));
    label->setScaledContents(true);
    V_layout->addWidget((label));
    QWidget *widget = new QWidget;
    widget->setLayout(V_layout);
    widget->resize(400,400);
    widget->setWindowTitle(title);//nom du pays
    widget->show();
    //widget->setcsetCentralWidget(widget);
}
