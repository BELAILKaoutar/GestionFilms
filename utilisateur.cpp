

#include "utilisateur.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>


/*void enregistrerUtilisateur(const Utilisateur& utilisateur) {
    QFile file("utilisateurs.txt");

    if (file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&file);
        out << utilisateur.NomUtilisateur << " \n" << utilisateur.MotDePasse ;
        file.close();
        qDebug() << "Inscription réussie.";
    } else {
        qDebug() << "Erreur lors de l'ouverture du fichier.";
    }
}*/
bool authenticationUtilisateur(const QString& Utilisateur, const QString& MotDePasse) {
    QFile file("utilisateurs.txt");

    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Erreur lors de l'ouverture du fichier.";
        return false;
    }

    QTextStream in(&file);
    QString storedNomUtilisateur, storedMotDePasse;

    while (!in.atEnd()) {
        in >> storedNomUtilisateur >> storedMotDePasse;
        if ((storedNomUtilisateur == Utilisateur) && (storedMotDePasse == MotDePasse)) {
            file.close();
            return true; // Utilisateur trouvé
        }
        break;
    }

    file.close();
    return false; // Utilisateur non trouvé
}




