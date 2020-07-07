# Created by and for Qt Creator This file was created for editing the project sources only.
# You may attempt to use it for building too, by modifying this file here.

TEMPLATE = app
QT += widgets

HEADERS = \
   $$PWD/configuration.h \
   $$PWD/monkeypass.h \
   $$PWD/passfilemanager.h \
    ui_monkeypass.h \
    generatedialog.h \
    jsonserializable.h \
    monkeyentry.h

SOURCES = \
   $$PWD/configuration.cpp \
   $$PWD/main.cpp \
   $$PWD/monkeypass.cpp \
   $$PWD/passfilemanager.cpp \
    generatedialog.cpp \
    jsonserializable.cpp \
    monkeyentry.cpp

INCLUDEPATH = \
    $$PWD/.

#DEFINES =

FORMS += \
    monkeypass.ui \
    generatedialog.ui

LIBS += \
    -L$$OUT_PWD/../MKTPassword/ -lMKTPassword \
    -L$$OUT_PWD/../MKTSettings/ -lMKTSettings

INCLUDEPATH +=$$PWD/../MKTPassword \
    $$PWD/../MKTSettings

DEPENDPATH +=$$PWD/../MKTPassword \
    $$PWD/../MKTSettings


RESOURCES += \
    mpresources.qrc

message("**LIBS**" $$LIBS)
#message("INCLUDEPATH" $$INCLUDEPATH)
#message($$DEPENDPATH)
#win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../MKTSettings/release/ -lMKTSettings
#else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../MKTSettings/debug/ -lMKTSettings
#else:unix: LIBS += -L$$OUT_PWD/../MKTSettings/ -lMKTSettings

#INCLUDEPATH += $$PWD/../MKTSettings
#DEPENDPATH += $$PWD/../MKTSettings
