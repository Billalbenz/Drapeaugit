#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Drapeaux tricolores  UE");
    resize(700,400);

    QPixmap bkgnd ("/home/sn11/Bureau/Adrache/Qt/logo-union-europeenne.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
    //--- Layout des boutons ---//
    QVBoxLayout *Pagelayout =new QVBoxLayout;
    QHBoxLayout *Hlayout1 =new QHBoxLayout;
    QHBoxLayout *Hlayout2 =new QHBoxLayout;
    QHBoxLayout *Hlayout3 =new QHBoxLayout;
    Pagelayout->addLayout(Hlayout1);
    Pagelayout->addLayout(Hlayout2);
    Pagelayout->addLayout(Hlayout3);
    this->B1->setGeometry(50, 100, 100, 50);
    this->B2->setGeometry(50, 100, 100, 50);
    this->B3->setGeometry(50, 100, 100, 50);
    this->B4->setGeometry(50, 100, 100, 50);
    this->B5->setGeometry(50, 100, 100, 50);
    this->B6->setGeometry(50, 100, 100, 50);
    this->B7->setGeometry(50, 100, 100, 50);

    this->B8->setGeometry(50, 100, 100, 50);
    this->B9->setGeometry(50, 100, 100, 50);
    this->B10->setGeometry(50, 100, 100, 50);
    this->B11->setGeometry(50, 100, 100, 50);
    this->B12->setGeometry(50, 100, 100, 50);
    this->B13->setGeometry(50, 100, 100, 50);
    this->B14->setGeometry(50, 100, 100, 50);

    this->B15->setGeometry(50, 100, 100, 50);
    this->B16->setGeometry(50, 100, 100, 50);
     this->B17->setGeometry(50, 100, 100, 50);
    this->B18->setGeometry(50, 100, 100, 50);
    this->B19->setGeometry(50, 100, 100, 50);
    //...//Complétez le dimensionnement de tous les boutons
    //--- Connexion du signal "clicked()" avec le slot de chaque drapeau ---//
    connect(B1, SIGNAL(clicked()),this, SLOT(Drapeau_ALLEMAGNE()));
    connect(B2, SIGNAL(clicked()),this, SLOT(Drapeau_AUTRICHE()));
    connect(B3, SIGNAL(clicked()),this, SLOT(Drapeau_BELGIQUE()));
    connect(B4, SIGNAL(clicked()),this, SLOT(Drapeau_BULGARIE()));
    connect(B5, SIGNAL(clicked()),this, SLOT(Drapeau_ESTONIE()));
    connect(B6, SIGNAL(clicked()),this, SLOT(Drapeau_FRANCE()));
    connect(B7, SIGNAL(clicked()),this, SLOT(Drapeau_HONGRIE()));

    connect(B8, SIGNAL(clicked()),this, SLOT(Drapeau_IRLANDE()));
    connect(B9, SIGNAL(clicked()),this, SLOT(Drapeau_ITALIE()));
    connect(B10, SIGNAL(clicked()),this, SLOT(Drapeau_LETTONIE()));
    connect(B11, SIGNAL(clicked()),this, SLOT(Drapeau_LITUANIE()));
    connect(B12, SIGNAL(clicked()),this, SLOT(Drapeau_LUXEMBOURG()));
    connect(B13, SIGNAL(clicked()),this, SLOT(Drapeau_PAYS_BAS()));
    connect(B14, SIGNAL(clicked()),this, SLOT(Drapeau_ROUMANIE()));

    connect(B15, SIGNAL(clicked()),this, SLOT(Drapeau_CROATIE()));
    connect(B16, SIGNAL(clicked()),this, SLOT(Drapeau_CHYPRE()));
    connect(B17, SIGNAL(clicked()),this, SLOT(Drapeau_GRECE()));
    connect(B18, SIGNAL(clicked()),this, SLOT(Drapeau_PORTUGAL()));
    connect(B19, SIGNAL(clicked()),this, SLOT(Drapeau_DANEMARK()));

    //...// Complétez toutes les connexions30
    //--- Ajout des bouton au Widget Horizotal ---//
    //Ajouter les boutons aux widgets Hlayout1 et Hlayout2
    Hlayout1->addWidget(B1);
    Hlayout1->addWidget(B2);
    Hlayout1->addWidget(B3);
    Hlayout1->addWidget(B4);
    Hlayout1->addWidget(B5);
    Hlayout1->addWidget(B6);
    Hlayout1->addWidget(B7);

    Hlayout2->addWidget(B8);
    Hlayout2->addWidget(B9);
    Hlayout2->addWidget(B10);
    Hlayout2->addWidget(B11);
    Hlayout2->addWidget(B12);
    Hlayout2->addWidget(B13);
    Hlayout2->addWidget(B14);

    Hlayout3->addWidget(B15);
    Hlayout3->addWidget(B16);
    Hlayout3->addWidget(B17);
     Hlayout3->addWidget(B18);
     Hlayout3->addWidget(B19);


    QWidget *widget =new QWidget;
    widget->setLayout(Pagelayout);
    setCentralWidget(widget);


}

void MainWindow::Drapeau_ALLEMAGNE(){
    //Trois bandes horizontales noire, rouge et or
    Drapeau *D =new Drapeau("black","red","gold","Vertical","Allemagne");
}

void MainWindow::Drapeau_AUTRICHE(){
    Drapeau *D1 =new Drapeau("red","white","red","Vertical","Autriche");
}

void MainWindow::Drapeau_BELGIQUE(){
    Drapeau *D2 =new Drapeau("black","yellow","red","Horizontal","Belgique");
}

void MainWindow::Drapeau_BULGARIE(){
    Drapeau *D3 =new Drapeau("white","green","red","Vertical","Bulgarie");

}

void MainWindow::Drapeau_ESTONIE(){
    Drapeau *D4 =new Drapeau("blue","black","white","Vertical","Estonie");
}

void MainWindow::Drapeau_FRANCE(){
    Drapeau *D5 =new Drapeau("blue","white","red","Horizontal","France");
}

void MainWindow::Drapeau_HONGRIE(){
    Drapeau *D6 =new Drapeau("red","white","green","Vertical","Hongrie");
}

void MainWindow::Drapeau_IRLANDE(){
    Drapeau *D7 =new Drapeau("green","white","orange","Horizontal","Irlande");
}

void MainWindow::Drapeau_ITALIE(){
    Drapeau *D8 =new Drapeau("green","white","red","Horizontal","Italie");
}

void MainWindow::Drapeau_LETTONIE(){
    Drapeau *D9 =new Drapeau("red","white","red","Vertical","Lettonie");
}

void MainWindow::Drapeau_LITUANIE(){
    Drapeau *D10 =new Drapeau("yellow","green","red","Vertical","Lituanie");
}

void MainWindow::Drapeau_LUXEMBOURG(){
    Drapeau *D11 =new Drapeau("red","white","blue","Vertical","Luxembourg");
}

void MainWindow::Drapeau_PAYS_BAS(){
    Drapeau *D12 =new Drapeau("red","white","blue","Vertical","Pays_Bas");
}

void MainWindow::Drapeau_ROUMANIE(){
    Drapeau *D13 =new Drapeau("blue","yellow","red","Horizontal","Roumanie");
}


void MainWindow::Drapeau_CROATIE()
{
    Autre_drapeau *D14 = new Autre_drapeau("/home/sn11/Bureau/Adrache/Qt/Drapeau/Croatie.png","Croatie");
}

void MainWindow::Drapeau_CHYPRE()
{
    Autre_drapeau *D15 = new Autre_drapeau("/home/sn11/Bureau/Adrache/Qt/Drapeau/chypre.svg","Croatie");
}
void MainWindow::Drapeau_GRECE()
{
    Autre_drapeau *D16 = new Autre_drapeau("/home/sn11/Bureau/Adrache/Qt/Drapeau/greece-flag.png","GRECE");
}
void MainWindow::Drapeau_PORTUGAL()
{
    Autre_drapeau *D17 = new Autre_drapeau("/home/sn11/Bureau/Adrache/Qt/Drapeau/langfr-225px-Flag_of_Portugal.svg.png","Portugal");
}
void MainWindow::Drapeau_DANEMARK()
{
    Autre_drapeau *D18 = new Autre_drapeau("/home/sn11/Images/72064_dk_flag_col_lg.gif","Danemark");
}
// Complétez tous les slots


MainWindow::~MainWindow()
{
    delete ui;
}

