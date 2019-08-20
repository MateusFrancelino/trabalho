TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

INCLUDEPATH += search

SOURCES += main.cpp

SOURCES += search/Binaria.cpp
SOURCES += search/linear.cpp

HEADERS += search/Binaria.h
HEADERS += search/linear.h
