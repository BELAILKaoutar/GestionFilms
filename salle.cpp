
#include "salle.h"
#include <QObject>
#include <QString>
#include <QDate>
#include "film.h"

Salle::Salle(QObject *parent) : QObject(parent)
{

}

QString Salle::titreFilm() const
{
    return m_titreFilm;
}

void Salle::setTitreFilm(const QString &titreFilm)
{
    m_titreFilm = titreFilm;
}

int Salle::numero() const
{
    return m_numero;
}

void Salle::setNumero(int numero)
{
    m_numero = numero;
}

int Salle::capacite() const
{
    return m_capacite;
}

void Salle::setCapacite(int capacite)
{
    m_capacite = capacite;
}

QString Salle::equipements() const
{
    return m_equipements;
}

void Salle::setEquipements(const QString &equipements)
{
    m_equipements = equipements;
}

bool Salle::disponible() const
{
    return m_disponible;
}

void Salle::setDisponible(bool disponible)
{
    m_disponible = disponible;
}

Salle Salle::ajouterSalle(const QString &titre, const QString &realisateur, int duree,
                          const QString &genre, const QDate &dateSortie,
                          const QString &description, const QString &affiche,
                          int num, int cap, const QString &equi, bool dispo)
{
    Filmfilm(titre, realisateur, duree, genre, dateSortie, description, affiche());
    return Salle(film, num, cap, equi, dispo);
}

void Salle::modifierDetails(const QString &titre, const QString &realisateur, int duree,
                            const QString &genre, const QDate &dateSortie,
                            const QString &description, const QString &affiche,
                            int num, int cap, const QString &equi, bool dispo)
{
    setTitreFilm(titre);
    setNumero(num);
    setCapacite(cap);
    setEquipements(equi);
    setDisponible(dispo);
}

void Salle::supprimerSalle(Salle *salle)
{
    if (salle != nullptr)
    {
        qDebug() << "Salle supprimée : " << salle->numero();
                                            delete salle;
    }
    else
    {
        qDebug() << "Aucune salle à supprimer.";
    }
}

