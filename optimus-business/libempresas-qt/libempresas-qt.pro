#-------------------------------------------------
#
# Project created by QtCreator 2018-07-11T08:50:12
#
#-------------------------------------------------

include("../optimus-business.pro")

QT       += widgets sql xml
QT       -= gui

win32:VERSION = $${LIB_EMPRESAS_MAJ}.$${LIB_EMPRESAS_MIN}.$${LIB_EMPRESAS_PAT}.$${LIB_EMPRESAS_BLD}
else:VERSION = $${LIB_EMPRESAS_MAJ}.$${LIB_EMPRESAS_MIN}.$${LLIB_EMPRESAS_PAT}

win32:TARGET = libempresas
else:TARGET = empresas

TEMPLATE = lib

DEFINES += LIBEMPRESASQT_LIBRARY

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += empresas.cpp

HEADERS += empresas.h libempresas-qt_global.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

DESTDIR = ../lib
