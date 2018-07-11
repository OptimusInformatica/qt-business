#-------------------------------------------------
#
# Project created by QtCreator 2018-07-10T06:42:24
#
#-------------------------------------------------
include("../optimus-business.pro")

QT       += core gui sql printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
LIB_EMPRESAS_VER_MAJ = 1
LIB_OPTIMUS_VER_MAJ = 1

win32:VERSION = 1.0.0.1
else:VERSION = 1.0.0

TARGET = business
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0



SOURCES += \
        main.cpp \
        mainbusiness.cpp \
    empresas/formempresas.cpp

HEADERS += \
        mainbusiness.h \
    version.h \
    empresas/formempresas.h

FORMS += \
        mainbusiness.ui \
    empresas/formempresas.ui

DESTDIR = ../bin

message($$LIB_EMPRESAS_VER_MAJ);


win32 {
    LIBS += -L../lib -llibempresas$${LIB_EMPRESAS_MAJ} -lliboptimus$${LIB_OPTIMUS_MAJ}
} else {
    LIBS += -L../lib -lempresas -loptimus
}

DISTFILES += business.rc
RC_FILE = business.rc
