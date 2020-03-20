//
// Created by Gogob on 3/20/2020.
//

#include <QtWidgets/QVBoxLayout>
#include "Exercice2.h"
#include <QDebug>
#include <iostream>

using namespace std;

Exercice2::Exercice2() {
    this->setMinimumSize(200,200);

    exitButton = new QPushButton("fils", this);
    secondButton = new QPushButton("Cliquez", this);
    buttonTexArea = new QPushButton("Bouton zone de texte !", this);
    buttonNewWindow = new QPushButton("Pour afficher l'ex1 c'est ici !", this);
    textArea = new QTextEdit("Texte initial");
    nbClicks = 0;
    nbClicksTextArea = 0;

    QGridLayout* position = new QGridLayout();
    position->addWidget(exitButton,0,0);
    position->addWidget(secondButton,0,1);
    position->addWidget(buttonTexArea, 1, 0, 1, 2);
    position->addWidget(textArea, 2, 0, 2, 2);
    position->addWidget(buttonNewWindow, 5, 0, 1, 2);
    this->setLayout(position);

    connect(exitButton, SIGNAL(clicked()), qApp, SLOT(quit()));

    connect(secondButton, SIGNAL(clicked()), this, SLOT(printNewInformations()));
//    connect(exitButton,SIGNAL(clicked()),this,SLOT(close())); // Equivalent

    connect(buttonTexArea, SIGNAL(clicked()), this, SLOT(changeTextArea()));

    connect(buttonNewWindow, SIGNAL(clicked()), this, SLOT(displayExercice1()));
}

void Exercice2::printNewInformations(){
    nbClicks++;
    secondButton->setText(QString("Exemple %1").arg(nbClicks));
    cout << "Exemple" << nbClicks << endl;
//    qDebug() <<secondButton->text(); Equivalent ligne dessus
}

void Exercice2::changeTextArea(){
    nbClicksTextArea++;
//    textArea->moveCursor(QTextCursor::Start); Changer ordre apparition texte
    textArea->insertPlainText(QString("Exemple %1  \n").arg(nbClicksTextArea));
}

void Exercice2::displayExercice1(){
    this->hide();
    Exercice1* ex1 = new Exercice1();
    ex1->show();
}