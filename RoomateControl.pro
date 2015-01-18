#-------------------------------------------------
#
# Project created by QtCreator 2015-01-18T11:48:17
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = RoomateControl
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    login_dialog.cpp \
    add_dialog.cpp

HEADERS  += mainwindow.h \
    login_dialog.h \
    add_dialog.h

FORMS    += mainwindow.ui \
    login_dialog.ui \
    add_dialog.ui

RESOURCES += \
    img.qrc
