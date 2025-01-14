QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    bc.cpp \
    main.cpp \
    mainwindow.cpp \
    score.cpp \
    test_1.cpp \
    ROF.cpp \

HEADERS += \
    bc.h \
    mainwindow.h \
    score.h \
    test_1.h \
    ROF.h \

FORMS += \
    bc.ui \
    mainwindow.ui \
    score.ui \
    test_1.ui

TRANSLATIONS += \
    math_tool_zh_CN.ts \
    .gitignore
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    .icon/ico/icon_for_math-tool_ico-128×128.ico \
    .icon/ico/icon_for_math-tool_ico-128×128.ico \
    .icon/ico/icon_for_math-tool_ico-16×16.ico \
    .icon/ico/icon_for_math-tool_ico-16×16.ico \
    .icon/ico/icon_for_math-tool_ico-24×24.ico \
    .icon/ico/icon_for_math-tool_ico-24×24.ico \
    .icon/ico/icon_for_math-tool_ico-256×256.ico \
    .icon/ico/icon_for_math-tool_ico-256×256.ico \
    .icon/ico/icon_for_math-tool_ico-32×32.ico \
    .icon/ico/icon_for_math-tool_ico-32×32.ico \
    .icon/ico/icon_for_math-tool_ico-48×48.ico \
    .icon/ico/icon_for_math-tool_ico-48×48.ico \
    .icon/ico/icon_for_math-tool_ico-64×64.ico \
    .icon/ico/icon_for_math-tool_ico-64×64.ico \
    .icon/ico/icon_for_math-tool_ico-96×96.ico \
    .icon/ico/icon_for_math-tool_ico-96×96.ico

RESOURCES += \
    math_tool_main.qrc
