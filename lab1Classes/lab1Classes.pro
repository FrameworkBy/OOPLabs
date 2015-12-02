TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

QMAKE_CXXFLAGS += /FAc
QMAKE_LFLAGS += /MAP

PRECOMPILED_HEADER = pc_header.h

SOURCES += main.cpp \
    exocar.cpp \
    keybordcontroller.cpp

HEADERS += \
    exocar.h \
    keybordcontroller.h \


