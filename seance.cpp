#include <QCoreApplication>
#include <QDebug>
#include "seance.h"

Seance::Seance(QObject *parent) : QObject(parent)
{
}

QString Seance::horaire() const
{
    return m_horaire;
}

void Seance::setHoraire(const QString &horaire)
{
    m_horaire = horaire;
}

Salle Seance::numeroSalle() const
{
    return m_numeroSalle;
}

void Seance::setNumeroSalle(const Salle &numeroSalle)
{
    m_numeroSalle = numeroSalle;
}

int Seance::capacite() const
{
    return m_capacite;
}

void Seance::setCapacite(int capacite)
{
    m_capacite = capacite;
}

double Seance::prixBillet() const
{
    return m_prixBillet;
}

void Seance::setPrixBillet(double prixBillet)
{
    m_prixBillet = prixBillet;
}

Seance Seance::ajouterSeance(const QString &horaire, const Salle &salle, int capacite, double prixBillet)
{
    return Seance(horaire, salle, capacite, prixBillet);
}

void Seance::modifierDetails(const QString &horaire, const Salle &salle, int capacite, double prixBillet)
{
    setHoraire(horaire);
    setNumeroSalle(salle);
    setCapacite(capacite);
    setPrixBillet(prixBillet);
}

void Seance::supprimerSeance(Seance *seance)
{
    if (seance != nullptr)
    {
        qDebug() << "Seance supprimée : " << seance->horaire();
                                             delete seance;
    }
    else
    {
        qDebug() << "Aucune séance à supprimer.";
    }
}
