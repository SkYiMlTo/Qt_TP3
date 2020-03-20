//
// Created by Gogob on 3/18/2020.
//

#ifndef TP3QT_EXERCICE1_H
#define TP3QT_EXERCICE1_H

#include <QtCore/QObject>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSlider>

class Exercice1 : public QWidget{
    Q_OBJECT
private:
    QProgressBar * myBar;
    QSlider * mySlider;

public:
    Exercice1();

};


#endif //TP3QT_EXERCICE1_H
