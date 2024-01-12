#ifndef AUTHENTIFICATIONDIALOG_H
#define AUTHENTIFICATIONDIALOG_H

#include <QDialog>

namespace Ui {
class AuthentificationDialog;
}

class AuthentificationDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AuthentificationDialog(QWidget *parent = nullptr);
    ~AuthentificationDialog();

private slots:
    void on_pushButtonConnexion_clicked(); // Déclaration de la fonction pour le slot
    void on_pushButtonCancel_clicked();    // Slot pour le bouton Cancel

private:
    Ui::AuthentificationDialog *ui;// Assurez-vous de déclarer ui comme un membre privé

    // Ajoutez d'autres membres ou méthodes privées au besoin



    // Fonction de vérification d'authentification
   // bool verifierAuthentification(const QString &NomUtilisateur, const QString &MotDePasse);
};












#endif // AUTHENTIFICATIONDIALOG_H
