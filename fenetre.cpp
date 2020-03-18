//
// Created by Gogob on 3/18/2020.
//

#include <QtWidgets/QVBoxLayout>
#include "fenetre.h"

fenetre::fenetre(){
    setWindowTitle("IHM");
    this->setMinimumSize(200,200);
//    myBar = new QProgressBar(this);
//    myBar->setValue(50);
//    mySlider =new QSlider(Qt::Horizontal,this);

    myBar = new QProgressBar();
    myBar->setRange(0, 100);
    myBar->setValue(0);
    myBar->setGeometry(10, 10, 180, 30);

    mySlider = new QSlider(Qt::Horizontal);
    mySlider->setRange(0, 100);
    mySlider->setValue(0);
    mySlider->setGeometry(10, 40, 180, 30);

    QVBoxLayout *verticalLayout = new QVBoxLayout();
    verticalLayout->addWidget(myBar);
    verticalLayout->addWidget(mySlider);
    this->setLayout(verticalLayout);

    connect(mySlider, SIGNAL(signalValueChanged(int)), myBar, SLOT(slotSetValue(int)));
//    emit signalValueChanged(3);
}

void fenetre::slotSetValue(int value) {
    this->value = value;
}