#ifndef NOTEPADWINDOWS_H
#define NOTEPADWINDOWS_H

#include <QMainWindow>
#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include <QPlainTextEdit>
#include <QFileDialog>
#include <QFile>
#include <QFontDialog>
#include <QClipboard>
#include <QKeySequence>
#include <QMessageBox>

class NotepadWindows : public QMainWindow
{
    Q_OBJECT

public:
    NotepadWindows(QWidget *parent = 0);
    ~NotepadWindows();
private slots:
    void alAbrir();
    void alGuardar();
    void alCerrar();
    void alFuente();
    void alAcercade();

private:
       QMenuBar* mainMenu_;
       QMenu* mnuArchivo_;
       QAction* actArchivoAbrir_;
       QAction* actGuardar_;
       QMenu* mnuFormato_;
       QAction* actFormatoFuente_;
       QAction* actCerrar_;
       QMenu* mnuEditar_;
       QAction* actEditarCopiar_;
       QAction* actEditarPegar_;
       QAction* actCortar_;
       QAction* actRehacer_;
       QAction* actDeshacer_;
       QMenu* mnuAyuda_;
       QAction* actAcercaDe_;
       QPlainTextEdit* txtEditor_;
       QClipboard * portapapeles_;


};


#endif // NOTEPADWINDOWS_H
