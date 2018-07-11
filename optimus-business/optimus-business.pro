TEMPLATE = subdirs

LIB_OPTIMUS_MAJ=1
LIB_OPTIMUS_PAT=0
LIB_OPTIMUS_MIN=0
LIB_OPTIMUS_BLD=1

LIB_EMPRESAS_MAJ=1
LIB_EMPRESAS_PAT=0
LIB_EMPRESAS_MIN=0
LIB_EMPRESAS_BLD=1

SUBDIRS += \
    optimus-business \
    liboptimus-qt \
    libempresas-qt

optimus-business.depends = liboptimus-qt libempresas-qt
