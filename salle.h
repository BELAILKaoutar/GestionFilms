#ifndef SALLE_H
#define SALLE_H

#include <QObject>
#include <QString>
#include <QDate>
#include <QVector>

class Salle : public QObject
{
    Q_OBJECT

public:
    Salle(QObject *parent = nullptr);

    QString titreFilm() const;
    void setTitreFilm(const QString &titreFilm);

    int numero() const;
    void setNumero(int numero);

    int capacite() const;
    void setCapacite(int capacite);

    QString equipements() const;
    void setEquipements(const QString &equipements);

    bool disponible() const;
    void setDisponible(bool disponible);

    // Static method to add a new salle with the title of a film and other attributes
    static Salle ajouterSalle(const QString &titre, const QString &realisateur, int duree,
                              const QString &genre, const QDate &dateSortie, const QString &description,
                              const QString &affiche, int num, int cap, const QString &equi, bool dispo);

    // Update salle details
    void modifierDetails(const QString &titre, const QString &realisateur, int duree,
                         const QString &genre, const QDate &dateSortie, const QString &description,
                         const QString &affiche, int num, int cap, const QString &equi, bool dispo);

    // Static method to delete a salle
    static void supprimerSalle(Salle *salle);

private:
    QString m_titreFilm;
    int m_numero;
    int m_capacite;
    QString m_equipements;
    bool m_disponible;
};


#endif // SALLE_H
