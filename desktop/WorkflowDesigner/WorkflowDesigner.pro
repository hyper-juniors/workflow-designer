TEMPLATE = app

QT += widgets
CONFIG += c++11

SOURCES += main.cpp \
    mainwindow.cpp \
    humantask.cpp \
    servicetask.cpp \
    connectionnode.cpp \
    startnode.cpp \
    endnode.cpp \
    gateway.cpp \
    parallelgateway.cpp \
    exlusivegateway.cpp \
    eventbasedgateway.cpp \
    pool.cpp \
    lane.cpp

RESOURCES += \
    designer.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
include(deployment.pri)

FORMS += \
    mainwindow.ui

HEADERS += \
    mainwindow.h \
    humantask.h \
    servicetask.h \
    connectionnode.h \
    startnode.h \
    endnode.h \
    gateway.h \
    parallelgateway.h \
    exlusivegateway.h \
    eventbasedgateway.h \
    pool.h \
    lane.h
