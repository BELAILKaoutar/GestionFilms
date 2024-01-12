#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "film.h"
#include <QInputDialog>
#include <QString>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

    // Exemple d'ajout d'un film à la liste
    QString titre = "Titre du Film";
    QString realisateur = "Réalisateur du Film";
    int duree = 120; ;  // Exemple : 120 minutes
    QDate dateDeSortie = QDate(2022, 1, 1);  // Exemple : 1er janvier 2022
    QString genre = "Le genre de Film";
    QString description = "Description du Film";
connect(ui->pushButtonAjouterFilm, SIGNAL(clicked()), this, SLOT(on_pushButtonAjouterFilm_clicked()));
}

MainWindow::~MainWindow() {
    delete ui;
}





//moi
void MainWindow::on_pushButtonAjouterFilm_clicked() {
    // Afficher une boîte de dialogue pour saisir les détails du film
    bool ok;
    QString titre = QInputDialog::getText(this, tr("Ajouter un Film"), tr("Titre du Film:"), QLineEdit::Normal, "", &ok);

    // Vérifier si l'utilisateur a appuyé sur Annuler
    if (!ok) {
        qDebug() << "Ajout de film annulé.";
            return;
    }

    // Saisir d'autres détails du film (exemple : réalisateur, année, etc.)
    QString realisateur = QInputDialog::getText(this, tr("Ajouter un Film"), tr("Nom du Réalisateur:"), QLineEdit::Normal, "", &ok);
        if (!ok) {
        qDebug() << "Ajout de film annulé.";
            return;
    }
    //genre
    QString genre = QInputDialog::getText(this, tr("Ajouter le genre"), tr("Genre:"), QLineEdit::Normal, "", &ok);
        if (!ok) {
            qDebug() << "Ajout de film annulé.";
                return;
        }

    //duree
        int duree = QInputDialog::getInt(this, tr("quelle est la duree"), tr("Duree:"), QLineEdit::Normal,120, 1, 1000, 1, &ok);
            if (!ok) {
            qDebug() << "Ajout de film annulé.";
                return;
        }

        // Saisir date de sortie
    QDate dateDeSortie = QInputDialog::getText(this, tr("Ajouter un Film"), tr("Date de Sortie:"), QDate::currentDate().year(), 1000, QDate::currentDate().year() + 10, 1, &ok);
        if (!ok) {
        qDebug() << "Ajout de film annulé.";
            return;
    }

    // description
        QString description = QInputDialog::getText(this, tr("Ajouter une description"), tr("Description:"), QLineEdit::Normal, "", &ok);
            if (!ok) {
            qDebug() << "Ajout de film annulé.";
                return;
        }


    // Une fois que vous avez tous les détails du film, vous pouvez les utiliser comme vous le souhaitez
    qDebug() << "Titre:" << titre;
    qDebug() << "Réalisateur:" << realisateur;
    qDebug() << "duree:" << duree;
    qDebug() << "Année de Sortie:" << dateDeSortie;
        qDebug() << "description du film:" << description;

    // Ajoutez le code pour ajouter le film à votre modèle de données ou à votre base de données
}


