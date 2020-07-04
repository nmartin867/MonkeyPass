# Created by and for Qt Creator This file was created for editing the project sources only.
# You may attempt to use it for building too, by modifying this file here.

#TARGET = MonkeyPass
QT += widgets

HEADERS = \
   $$PWD/configuration.h \
   $$PWD/monkeypass.h \
   $$PWD/passfilemanager.h \
    ui_monkeypass.h \
    generatedialog.h

SOURCES = \
   $$PWD/configuration.cpp \
   $$PWD/main.cpp \
   $$PWD/monkeypass.cpp \
   $$PWD/passfilemanager.cpp \
    generatedialog.cpp

INCLUDEPATH = \
    $$PWD/.

#DEFINES = 

FORMS += \
    monkeypass.ui \
    generatedialog.ui

