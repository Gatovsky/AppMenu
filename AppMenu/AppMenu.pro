QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    burbuja.cpp \
    entradadatos.cpp \
    insercion.cpp \
    intercambio.cpp \
    main.cpp \
    mainwindow.cpp \
    quicksort.cpp \
    seleccion.cpp

HEADERS += \
    burbuja.h \
    entradadatos.h \
    insercion.h \
    intercambio.h \
    mainwindow.h \
    quicksort.h \
    seleccion.h

FORMS += \
    entradadatos.ui \
    mainwindow.ui

TRANSLATIONS += \
    AppMenu_es_MX.ts
CONFIG += lrelease
CONFIG += embed_translations

RC_ICONS = ../assets/icono.ico

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
