#ifndef SEANCE_H
#define SEANCE_H
#include <QObject>
#include <QString>
#include <QDate>
#include<QDebug>
#include "salle.h"
#include "billet.h"
class Seance: public QObject
{
    Q_OBJECT

public:
    Seance(QObject *parent = nullptr);


        QString horaire() const;
        void setHoraire(const QString &horaire);

        Salle numeroSalle() const;
        void setNumeroSalle(const Salle &numeroSalle);

        int capacite() const;
        void setCapacite(int capacite);

        double prixBillet() const;
        void setPrixBillet(double prixBillet);

        // Constructor with Salle
        Seance(const QString &hor, const Salle &s, int cap, double prix);
        // Display Seance details
        void afficherDetailsSeance() const {
            qDebug() << "Horaire: " << m_horaire;
            qDebug() << "Numéro de séance: " << m_numeroSalle.numero();
                qDebug() << "Capacité: " << m_capacite;
                        qDebug() << "PrixBillet: " << m_prixBillet;
        }

    private:
        QString m_horaire;
        Salle m_numeroSalle;
        int m_capacite;
        double m_prixBillet;


};

#endif // SEANCE_H
