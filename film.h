#ifndef FILM_H
#define FILM_H
#include <QObject>
#include <QString>
#include <QDate>
#include <Qvector>
class Film : public QObject
{
public:
     Q_OBJECT
    Film(QObject *parent = nullptr);
    QString titre() const;
    void setTitre(const QString &titre);
    QString realisateur() const;
    void setRealisateur(const QString &realisateur);

    // Ajout d'une méthode d'accès pour la durée (supposant un type int)
    int duree() const;
    void setDuree(int duree);
     QString genre() const;
    void setGenre(const QString &genre);

    QDate dateDeSortie() const;
    void setDateDeSortie(const QDate &dateDeSortie);

    QString description() const;
    void setDescription(const QString &description);

    QString affiche() const;
    void setAffiche(const QString &affiche);
    Film(const QString& titre, const QString& realisateur, int duree,
         const QString& genre, const QDate& dateDeSortie,
         const QString& description, const QString& affiche);
private:
    QString m_titre;
    QString m_realisateur;
    int m_duree;
    QString m_genre;
    QDate m_dateDeSortie;
    QString m_description;
    QString m_affiche;};
#endif // FILM_H
