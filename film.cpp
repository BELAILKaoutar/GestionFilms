#include "film.h"

//#include "utilisateur.h"

Film::Film(QObject *parent) : QObject(parent)
{

}
/*Film::Film(const QString& titre, const QString& realisateur, int duree,
           const QString& genre, const QDate& dateDeSortie,
           const QString& description, const QString& affiche)
    : m_titre(titre), m_realisateur(realisateur), m_duree(duree),
      m_genre(genre), m_dateDeSortie(dateDeSortie),
      m_description(description), m_affiche(affiche) {}*/
QString Film::titre() const
{
    return m_titre;
}
void Film::setTitre(const QString &titre)
{
    m_titre = titre;
}

QString Film::realisateur() const
{
    return m_realisateur;
}

void Film::setRealisateur(const QString &realisateur)
{
    m_realisateur = realisateur;
}

int Film::duree() const
{
    return m_duree;
}

void Film::setDuree(int duree)
{
    m_duree = duree;
}
QString Film::genre() const
{
    return m_genre;
}

void Film::setGenre(const QString &genre)
{
    m_genre = genre;
}

QDate Film::dateDeSortie() const
{
    return m_dateDeSortie;
}

void Film::setDateDeSortie(const QDate &dateDeSortie)
{
    m_dateDeSortie = dateDeSortie;
}

QString Film::description() const
{
    return m_description;
}

void Film::setDescription(const QString &description)
{
    m_description = description;
}

QString Film::affiche() const
{
    return m_affiche;
}

void Film::setAffiche(const QString &affiche)
{
    m_affiche = affiche;
}









