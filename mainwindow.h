#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QList>
#include "film.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
     explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:

void on_pushButtonAjouterFilm_clicked(); // Déclaration de la fonction
private:
    Ui::MainWindow *ui;
     QList<Film> listeFilms;
};
#endif // MAINWINDOW_H
