#include<QDebug>
#include<QString>
#include "billet.h"
#include "seance.h"
#include"film.h"


Billet::Billet(int num, const Seance& s, double p, const QString& date) : numero(num), seance(s), prix(p), dateAchat(date) {}

void Billet::afficherDetailsBillet() const {
    qDebug() << "Pour le Billet :";
    qDebug() << "Numero de billet:" << numero;
    qDebug() << "Prix:" << prix << "dh";
    qDebug() << "Date d'achat:" << dateAchat;
    seance.afficherDetailsSeance();
}

Billet Billet::ajouterBillet(int num, const Seance& s, double p, const QString& date) {
    return Billet(num, s, p, date);
}

void Billet::modifierDetails(int num, const Seance& s, double p, const QString& date) {
    numero = num;
    seance = s;
    prix = p;
    dateAchat = date;
}

void Billet::supprimerBillet(Billet* billet) {
    if (billet != nullptr) {
        qDebug() << "Billet supprime :" << billet->numero;
        delete billet;
    } else {
        qDebug() << "Aucun billet à supprimer.";
    }
}

// Autres méthodes ou implémentations nécessaires pour la classe Billet
