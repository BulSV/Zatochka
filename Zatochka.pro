TEMPLATE = app
CONFIG += console
CONFIG -= qt

SOURCES += main.cpp \
    refine.cpp \
    matematika.cpp \
    iochecker.cpp \
    armor.cpp \
    stone.cpp \
    tienkangstone.cpp \
    tishastone.cpp \
    chienkunstone.cpp \
    miragecelestone.cpp \
    catalyzerstone.cpp

HEADERS += \
    refine.h \
    matematika.h \
    iochecker.h \
    armor.h \
    globalenums.h \
    stone.h \
    tienkangstone.h \
    tishastone.h \
    chienkunstone.h \
    miragecelestone.h \
    catalyzerstone.h

OTHER_FILES += \
    TODO.txt    \
    refactor.cpp

