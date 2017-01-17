QT += core
QT -= gui

CONFIG += c++11

TARGET = laser3d
CONFIG += console
CONFIG -= app_bundle


LIBS += -openmp


CONFIG += link_pkgconfig
PKGCONFIG += opencv

TEMPLATE = app

SOURCES += main.cpp \
    recognition.cpp

HEADERS += \
    recognition.h
