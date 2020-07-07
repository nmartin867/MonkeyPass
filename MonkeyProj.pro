TEMPLATE = subdirs

SUBDIRS += \
    MKTSettings \
    MonkeyPass \
    MKTPassword

app.subdir = MonkeyPass
lib.subdir = MKTSettings
lib2.subdir = MKTPassword

app.depends = lib lib2

