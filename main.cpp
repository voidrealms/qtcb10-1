#include <QCoreApplication>
#include <QDebug>


void test(QString name) {
    qInfo() << "Size = " << name.length();
}

void testPrt(QString* name) {
    qInfo() << "Size = " << name->length();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    QString name = "Bryan"; //QString constructor here
    test(name);
    testPrt(&name);

    return a.exec();

    //Destructors called here
}
