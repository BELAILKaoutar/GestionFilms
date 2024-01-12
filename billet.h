

#ifndef BILLET_H
#define BILLET_H
#include <QObject>
#include <QString>
#include <QDebug>
#include "seance.h"

// Assume Seance class is also modified for Qt Creator

class Billet : public QObject {
    Q_OBJECT

public:
    int numero;
    Seance seance;
    double prix;
    QString dateAchat;

    Billet(int num, const Seance& s, double p, const QString& date) : numero(num), seance(s), prix(p), dateAchat(date) {}

    void afficherDetailsBillet() const {
        qDebug() << "Pour le Billet :";
        qDebug() << "Numero de billet:" << numero;
        qDebug() << "Prix:" << prix << "dh";
        qDebug() << "Date d'achat:" << dateAchat;
        seance.afficherDetailsSeance();
    }

    static Billet ajouterBillet(int num, const Seance& s, double p, const QString& date) {
        return Billet(num, s, p, date);
    }

    void modifierDetails(int num, const Seance& s, double p, const QString& date) {
        numero = num;
        seance = s;
        prix = p;
        dateAchat = date;
    }

    static void supprimerBillet(Billet* billet) {
        if (billet != nullptr) {
            qDebug() << "Billet supprime :" << billet->numero;
            delete billet;
        } else {
            qDebug() << "Aucun billet à supprimer.";
        }
    }
};

#endif // BILLET_H
