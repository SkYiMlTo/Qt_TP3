//
// Created by Gogob on 3/20/2020.
//

#include <QtWidgets/QVBoxLayout>
#include "Exercice2.h"

Exercice2::Exercice2() {
    this->setMinimumSize(200,200);

    myButton = new QPushButton("fils", this);



    QVBoxLayout *verticalLayout = new QVBoxLayout();
    verticalLayout->addWidget(myButton);
    this->setLayout(verticalLayout);

    connect(myButton,SIGNAL(clicked()),qApp,SLOT(quit()));
//    connect(myButton,SIGNAL(clicked()),this,SLOT(close())); // Equivalent
}