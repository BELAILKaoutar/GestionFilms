#ifndef UI_AUTHENTIFICATIONDIALOG_H
#define UI_AUTHENTIFICATIONDIALOG_H


#include <QtCore/QVariant>
#include <QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AuthentificationDialog
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *labelNomUtilisateur;
    QLineEdit *lineEditNomUtilisateur;
    QLabel *labelMotDePasse;
    QLineEdit *lineEditMotDePasse;
    QGridLayout *gridLayout_2;
    QPushButton *pushButtonConnexion;
    QPushButton *pushButtonCancel;

    void setupUi(QDialog *AuthentificationDialog)
    {
        // ... (autres initialisations générées par l'outil)

        // Exemple de configuration d'un QLabel et QLineEdit
        labelNomUtilisateur = new QLabel(AuthentificationDialog);
        formLayout->setWidget(0, QFormLayout::LabelRole, labelNomUtilisateur);
        lineEditNomUtilisateur = new QLineEdit(AuthentificationDialog);
        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditNomUtilisateur);

        // ... (autres configurations générées par l'outil)

        // Exemple de configuration d'un QPushButton
        pushButtonConnexion = new QPushButton(AuthentificationDialog);
        pushButtonCancel = new QPushButton(AuthentificationDialog);

        gridLayout_2->addWidget(pushButtonConnexion, 0, 0, 1, 1);

        // ... (autres configurations générées par l'outil)
    }
};

namespace Ui {
class AuthentificationDialog: public Ui_AuthentificationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHENTIFICATIONDIALOG_H
