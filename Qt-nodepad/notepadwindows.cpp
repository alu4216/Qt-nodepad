#include "notepadwindows.h"

NotepadWindows::NotepadWindows(QWidget *parent)
    : QMainWindow(parent)
{
    txtEditor_ = new QPlainTextEdit(this); // no hace falta crear el destructor al instanciar un obejto de QT y referenciarle
                                            // el padre (QMainWindows) al cerrar esta, tambíen se eliminará los objetos hijos

    setCentralWidget(txtEditor_);
    //Inicializamos los menús
    mainMenu_= new QMenuBar(this);
    mnuArchivo_= new QMenu(tr("&Archivo"),this);// tr para traducir cualquier cadena por otra. tr permite cambiar Archivo a file
    mainMenu_->addMenu(mnuArchivo_);//añadimos la pestaña archivo


    actArchivoAbrir_ = new QAction(tr("&Abrir"),this);
    actArchivoAbrir_->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_O));
    mnuArchivo_->addAction(actArchivoAbrir_);

    actGuardar_=new QAction(tr("&Guardar"),this);
    actGuardar_->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_Save));
    mnuArchivo_->addAction(actGuardar_);

    actCerrar_=new QAction(tr("&Cerrar"),this);
    actCerrar_->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_C));
    mnuArchivo_->addAction(actCerrar_);

    mnuEditar_ = new QMenu(tr("&Editar"));
    mainMenu_->addMenu(mnuEditar_);//añadimos la pestaña editar

    actEditarCopiar_ = new QAction(tr("&Copiar"), this);
    actEditarCopiar_->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_C));
    mnuEditar_->addAction(actEditarCopiar_);

    actEditarPegar_ = new QAction(tr("&Pegar"), this);
    actEditarPegar_->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_V));
    mnuEditar_->addAction(actEditarPegar_);

    mnuFormato_ = new QMenu(tr("&Formato"));//añadimos menu formato
    mainMenu_->addMenu(mnuFormato_);

    actFormatoFuente_ = new QAction(tr("&Fuente"), this);
    mnuFormato_->addAction(actFormatoFuente_);

    actCortar_=new QAction(tr("&Cortar"),this);
    mnuEditar_->addAction(actCortar_);

    actRehacer_=new QAction(tr("&Rehacer"),this);
    mnuEditar_->addAction(actRehacer_);

    actDeshacer_=new QAction(tr("&Deshacer"),this);
    mnuEditar_->addAction(actDeshacer_);

    mnuAyuda_=new QMenu(tr("&Ayuda"));//añadimos menu ayuda
    mainMenu_->addMenu(mnuAyuda_);

    actAcercaDe_=new QAction(tr("&Acerca de"),this);
    mnuAyuda_->addAction(actAcercaDe_);


    setMenuBar(mainMenu_);

    //conectar las acciones de los menus con nuestros slots
    connect(actArchivoAbrir_, SIGNAL(triggered()),this, SLOT(alAbrir()));
    connect(actGuardar_, SIGNAL(triggered()),this, SLOT(alGuardar()));
    connect(actCerrar_, SIGNAL(triggered()),this, SLOT(alCerrar()));
    connect(actEditarCopiar_, SIGNAL(triggered()), txtEditor_, SLOT(copy()));
    connect(actEditarPegar_, SIGNAL(triggered()), txtEditor_, SLOT(paste()));
    connect(actFormatoFuente_, SIGNAL(triggered()), this, SLOT(alFuente()));
    connect(actCortar_,SIGNAL(triggered()),txtEditor_,SLOT(cut()));
    connect(actRehacer_, SIGNAL(triggered()), txtEditor_, SLOT(redo()));
    connect(actDeshacer_, SIGNAL(triggered()), txtEditor_, SLOT(undo()));
    connect(actAcercaDe_,SIGNAL(triggered()),this,SLOT(alAcercade()));





}


NotepadWindows::~NotepadWindows(){ }

void NotepadWindows::alAbrir()
{
    QString nombreArchivo;
    nombreArchivo =QFileDialog::getOpenFileName(this,tr("Abrir archivo"),"",
                                                 tr("Archivos de texto plano (*.txt)"));
    if(nombreArchivo != "") {
        //Intentamos abrir el archivo
        QFile archivo;
        archivo.setFileName((nombreArchivo));
        if(archivo.open(QFile::ReadOnly)){
            //se se abrió el archivo lo leemos y lo colocamos en el txtEditor_
            txtEditor_->setPlainText(archivo.readAll());
            //se cierra el fichero
            archivo.close();
        }
    }


}

void NotepadWindows::alGuardar()
{
    QString nombreArchivo;
    nombreArchivo= QFileDialog::getSaveFileName(this,tr("Guardar archivo de texto plano"),
                                                "",tr("Archivo de texto (*.txt)"));
  if(nombreArchivo!="") {
    QFile archivo;
    archivo.setFileName(nombreArchivo + ".txt");
    if(archivo.open(QFile::WriteOnly |QFile::Truncate)) {
        //Si se puede abrir el archivo, escribimos el contenido
        archivo.write(txtEditor_->toPlainText().toUtf8());
        //Se cierra el fichero
        archivo.close();
    }
  }


}

void NotepadWindows::alCerrar()
{
    //qApp->quit();
    exit(0);
}
void NotepadWindows::alFuente()
{
    bool ok;
    QFont font = QFontDialog::getFont(&ok, txtEditor_->font(), this);
    if (ok) {
        // Si el usuario hizo click en OK, se establece la fuente seleccionada
        txtEditor_->setFont(font);
    }
}

void NotepadWindows::alAcercade()
{
    QMessageBox msgBox;
    msgBox.setText("Curso de QT. Nodepad");
    msgBox.exec();


}




