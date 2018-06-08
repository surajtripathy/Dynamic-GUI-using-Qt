# -------------------------------------------------
# Project created by QtCreator 2017-05-14T23:57:27
# -------------------------------------------------
QT += core \
    gui
greaterThan(QT_MAJOR_VERSION, 4):QT += widgets
TARGET = Assignment
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
# DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0
SOURCES += main.cpp \
    a1.cpp \
    child.cpp
HEADERS += a1.h \
    child.h
FORMS += a1.ui \
    child.ui
win32 { 
    INCLUDEPATH += c:\qwt-5.2.0\include \
        c:\qledplugin
    LIBS += c:\qwt-5.2.0\lib\qwt5.dll \
        c:\qledplugin\release\qledplugin.dll \
        -lws2_32
}
unix { 
    INCLUDEPATH += /usr/lib/qwt-5.2.0/include \
        /usr/lib/qledplugin
    LIBS += -lqwt \
        -lqledplugin
}
