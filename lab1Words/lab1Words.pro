TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

PRECOMPILED_HEADER = pc_header.h

SOURCES += main.cpp \
    wordsparser.cpp

HEADERS += \
    wordsparser.h

