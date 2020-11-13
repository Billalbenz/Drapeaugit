#ifndef AUTRE_DRAPEAU_H
#define AUTRE_DRAPEAU_H
#include <QWidget>
#include<QLabel>
#include <QPixmap>
#include <QVBoxLayout>
class Autre_drapeau : public QWidget
{
    Q_OBJECT

public:
    Autre_drapeau(QWidget *parent = nullptr) ;
    Autre_drapeau(QString,QString);
    QLabel *label = new QLabel(this);
    QVBoxLayout * V_layout = new QVBoxLayout;
};



#endif // AUTRE_DRAPEAU_H
