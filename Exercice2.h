//
// Created by Gogob on 3/20/2020.
//

#ifndef TP3QT_EXERCICE2_H
#define TP3QT_EXERCICE2_H

#include <QtCore/QObject>
#include <QtWidgets/QPushButton>
#include <QtCore>


class Exercice2 : public QWidget{
    Q_OBJECT
private:
    QPushButton* myButton;
public:
    Exercice2();
};


#endif //TP3QT_EXERCICE2_H
