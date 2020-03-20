#include <QtWidgets/QApplication>
#include "Exercice1.h"
#include "Exercice2.h"

int main(int argc, char **argv) {
    QApplication app (argc, argv);
//    Exercice1 sql;
//    sql.show();

    Exercice2 php;
    php.show();

    return app.exec();

}
