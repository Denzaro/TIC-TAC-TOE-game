QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets core gui

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    src/function.cpp \
    src/main.cpp \
    src/tictactoe_op.cpp

HEADERS += \
    inc/GUI_LEVEL.h \
    inc/GUI_MODE.h \
    inc/function.h \
    inc/option.h \
    inc/result_tictactoe.h \
    inc/tictactoe_op.h \
    inc/tictactoe_ui.h \

FORMS += \
    ui/GUI_LEVEL.ui \
    ui/GUI_MODE.ui \
    ui/option.ui \
    ui/result_tictactoe.ui \
    ui/tictactoe_ui.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    image.qrc

DISTFILES += \
    image/Menu.png \
    image/O.png \
    image/Result.png \
    image/Title.png \
    image/X.png \
    image/background.png \
    image/background3.jpg \
    image/cup-1.png \
    image/cup-star.png \
    image/people.png \
    image/person.png \
    image/retry.png \
    image/table.png \
