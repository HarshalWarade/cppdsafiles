#include <QApplication>
#include <QTextEdit>
#include <QMenuBar>
#include <QFileDialog>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    // Create the main window
    QWidget window;
    window.setWindowTitle("Text Editor");

    // Create the text edit control
    QTextEdit textEdit;
    window.setCentralWidget(&textEdit);

    // Create the file menu
    QMenuBar *menuBar = window.menuBar();
    QMenu *fileMenu = menuBar->addMenu("&File");

    // Add menu items for open and save
    QAction *openAction = new QAction("&Open", &window);
    fileMenu->addAction(openAction);

    QAction *saveAction = new QAction("&Save", &window);
    fileMenu->addAction(saveAction);

    // Connect the menu items to functions
    QObject::connect(openAction, &QAction::triggered, [&]()
                     {
        QString fileName = QFileDialog::getOpenFileName(&window, "Open File", ".", "Text Files (*.txt)");
        QFile file(fileName);
        if (file.open(QIODevice::ReadOnly | QIODevice::Text))
            textEdit.setPlainText(file.readAll()); });

    QObject::connect(saveAction, &QAction::triggered, [&]()
                     {
        QString fileName = QFileDialog::getSaveFileName(&window, "Save File", ".", "Text Files (*.txt)");
        QFile file(fileName);
        if (file.open(QIODevice::WriteOnly | QIODevice::Text))
            file.write(textEdit.toPlainText().toUtf8()); });

    // Show the window
    window.show();

    // Run the event loop
    return app.exec();
}
