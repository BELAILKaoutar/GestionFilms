#include "mainwindow.h"
#include "authentificationdialog.h"
#include "utilisateur.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    // Créer et afficher la fenêtre d'authentification
    AuthentificationDialog authDialog;
    authDialog.show();

    // Exécuter l'application jusqu'à ce que la fenêtre d'authentification soit fermée
    int authResult = app.exec();

    // Si l'authentification réussit (par exemple, enregistrement utilisateur réussi)
    if (authResult == QDialog::Accepted) {
        // Créer un utilisateur
        Utilisateur nouveauUtilisateur;
        nouveauUtilisateur.NomUtilisateur = "NouveauUtilisateur";
        nouveauUtilisateur.MotDePasse = "MotDePasseSecret";

        // Appeler la fonction pour enregistrer l'utilisateur
        //enregisterUtilisateur(nouveauUtilisateur);

        // Créer et afficher la fenêtre principale
        MainWindow w;
        w.show();

        // Exécuter l'application
        return app.exec();
    } else {
        // Si l'authentification échoue ou est annulée, quitter l'application
        return 0;
    }

    Billet monBillet;
    monBillet.numero = 1;
    monBillet.prix = 10.99;
    monBillet.dateAchat = "2024-01-10";

    // Accès à l'objet Seance
    monBillet.seance.setHoraire("10:00");
    monBillet.seance.setNumeroSalle(/* ... */);
    monBillet.seance.setCapacite(/* ... */);
    monBillet.seance.setPrixBillet(/* ... */);
}
