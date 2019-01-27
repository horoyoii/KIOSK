#-------------------------------------------------
#
# Project created by QtCreator 2019-01-02T16:50:10
#
#-------------------------------------------------
QT       += core gui sql quickwidgets quick network
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = McD
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
CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    basket.cpp \
    mydatabase.cpp \
    item.cpp \
    databasehandler.cpp \
    detailwindow.cpp \
    globalhelper.cpp \
    backetlistitem.cpp \
    payment.cpp \
    standbypage.cpp \
    mythread.cpp \
    myserver.cpp \
    mytimer.cpp \
    mydebug.cpp

HEADERS += \
        mainwindow.h \
    basket.h \
    mydatabase.h \
    item.h \
    databasehandler.h \
    detailwindow.h \
    globalhelper.h \
    backetlistitem.h \
    payment.h \
    standbypage.h \
    mythread.h \
    myserver.h \
    mytimer.h \
    mydebug.h

FORMS += \
        mainwindow.ui \
    detailwindow.ui \
    detailwindow.ui \
    backetlistitem.ui \
    payment.ui \
    standbypage.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    myimage.qrc \
    res.qrc

DISTFILES +=
