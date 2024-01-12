#include "authentificationdialog.h"
#include "ui_authentificationdialog.h"
#include "mainwindow.h"

#include <QPalette>
#include <QColor>
#include <QMessageBox>

AuthentificationDialog::AuthentificationDialog(QWidget *parent) : QDialog(parent), ui(new Ui::AuthentificationDialog)
{
    ui->setupUi(this);

    // Changer la couleur de fond
    QPalette palette;
    palette.setColor(QPalette::Window, QColor(100, 149, 237));  // Utilisez la couleur que vous souhaitez
    setPalette(palette);
    setAutoFillBackground(true);


    // Connecter le signal clicked() du bouton à notre slot personnalisé
    connect(ui->pushButtonConnexion, SIGNAL(clicked()), this, SLOT(on_pushButtonConnexion_clicked()));
    connect(ui->pushButtonCancel, SIGNAL(clicked()), this, SLOT(on_pushButtonCancel_clicked()));
}


AuthentificationDialog::~AuthentificationDialog()
{
    delete ui;
}

void AuthentificationDialog::on_pushButtonConnexion_clicked()
{
    QString NomUtilisateur = ui->lineEditNomUtilisateur->text();
    QString MotDePasse = ui->lineEditMotDePasse->text();

    if (NomUtilisateur=="admin") {
        // Rediriger vers la page principale
        MainWindow *mainWindow = new MainWindow(this); // Assurez-vous que MainWindow est correctement inclus
        mainWindow->show();
        accept();  // Fermer la fenêtre d'authentification si l'authentification réussit
    }
    else {
        // Afficher un message d'erreur si l'authentification échoue
        QMessageBox::critical(this, tr("Erreur d'authentification"), tr("Nom d'utilisateur ou mot de passe incorrect."));
    }


}

void AuthentificationDialog::on_pushButtonCancel_clicked()
{
    // Annuler l'opération d'authentification et fermer la fenêtre
    reject();
}

//bool AuthentificationDialog::verifierAuthentification(const QString &nomUtilisateur, const QString &motDePasse){}


