TEMPLATE = subdirs

SUBDIRS += \
    MKTSettings \
    MonkeyPass \
    MKTPassword

app.subdir = MonkeyPass
lib.subdir = MKTPassword

app.depends = lib

