TEMPLATE = subdirs

SUBDIRS += \
    MonkeyPass \
    MKTPassword

app.subdir = MonkeyPass
lib.subdir = MKTPassword

app.depends = lib

