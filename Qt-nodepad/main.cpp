#include "notepadwindows.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    NotepadWindows w;
    w.show();

    return a.exec();
}
