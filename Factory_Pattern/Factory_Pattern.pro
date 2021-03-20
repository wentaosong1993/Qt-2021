QT += core gui
#QT -= gui

CONFIG += c++11

TARGET = Factory_Pattern
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp

HEADERS += \
    Product.h \
    ConcreteProduct.h \
    Factory.h
