#include <QCoreApplication>

#include "recognition.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    recognition tmp;
    tmp.init();

    return a.exec();
}
