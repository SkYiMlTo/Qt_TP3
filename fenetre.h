//
// Created by Gogob on 3/18/2020.
//

#ifndef TP3QT_FENETRE_H
#define TP3QT_FENETRE_H

#include <QtCore/QObject>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSlider>

class fenetre : public QWidget{
    Q_OBJECT
private:
    QProgressBar * myBar;
    QSlider * mySlider;
    int value;

public:
    fenetre();

//public slots:
//    void slotSetValue(int value);
//
//signals:
//    void signalValueChanged(int value);
};


#endif //TP3QT_FENETRE_H
