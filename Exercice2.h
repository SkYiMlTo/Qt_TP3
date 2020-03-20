//
// Created by Gogob on 3/20/2020.
//

#ifndef TP3QT_EXERCICE2_H
#define TP3QT_EXERCICE2_H

#include <QtCore/QObject>
#include <QtWidgets/QPushButton>
#include <QtCore>
#include <QtWidgets/QTextEdit>
#include "Exercice1.h"


class Exercice2 : public QWidget{
    Q_OBJECT
private:
    QPushButton* exitButton;
    QPushButton* secondButton;
    QPushButton* buttonTexArea;
    QPushButton* buttonNewWindow;
    QTextEdit* textArea;
    int nbClicks, nbClicksTextArea;
public:
    Exercice2();

public slots:
    void printNewInformations();
    void changeTextArea();
    void displayExercice1();
};


#endif //TP3QT_EXERCICE2_H
