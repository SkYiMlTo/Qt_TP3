#include <QtWidgets/QApplication>
#include "fenetre.h"

int main(int argc, char **argv) {
    QApplication app (argc, argv);
    fenetre sql;
    sql.show();
    return app.exec();
}
