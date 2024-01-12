#ifndef UTILISATEUR_H
#define UTILISATEUR_H


#include <QString>
#include <QFile>
#include <QTextStream>
#include <QDebug>



struct Utilisateur {
    QString NomUtilisateur;
    QString MotDePasse;
};
//void enregistrerUtilisateur(const Utilisateur& utilisateur);

bool authenticationUtilisateur(const QString& NomUtilisateur, const QString& MotDePasse);



#endif // UTILISATEUR_H
