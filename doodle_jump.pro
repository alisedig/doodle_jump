QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Button.cpp \
    Controller.cpp \
    Doodler.cpp \
    Multidoodler1.cpp \
    Multidoodler2.cpp \
    Multiplatform1.cpp \
    Multiplatform2.cpp \
    Platform.cpp \
    View.cpp \
    main.cpp

HEADERS += \
    Button.h \
    Controller.h \
    Doodler.h \
    Multidoodler1.h \
    Multidoodler2.h \
    Multiplatform1.h \
    Multiplatform2.h \
    Platform.h \
    View.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    rs.qrc
