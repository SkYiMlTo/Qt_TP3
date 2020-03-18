//
// Created by Gogob on 3/18/2020.
//

#include <QtWidgets/QVBoxLayout>
#include "fenetre.h"

fenetre::fenetre(){
    setWindowTitle("IHM");
    this->setMinimumSize(200,200);
    myBar = new QProgressBar(this);
    myBar->setValue(50);
    mySlider =new QSlider(Qt::Horizontal,this);

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