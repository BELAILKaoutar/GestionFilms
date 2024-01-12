QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    authentificationdialog.cpp \
    billet.cpp \
    db.cpp \
    film.cpp \
    main.cpp \
    mainwindow.cpp \
    salle.cpp \
    seance.cpp \
    utilisateur.cpp

HEADERS += \
    authentificationdialog.h \
    billet.h \
    film.h \
    mainwindow.h \
    salle.h \
    seance.h \
    ui_authentificationdialog.h \
    utilisateur.h

FORMS += \
    Salle.ui \
    authentificationdialog.ui \
    mainwindow.ui \
    planification.ui \
    seance.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
