QT       += core gui
QT += multimedia



greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    tictactoe_op.cpp

HEADERS += \
    GUI_LEVEL.h \
    GUI_MODE.h \
    main.h \
    option.h \
    result_tictactoe.h \
    tictactoe_op.h \
    tictactoe_ui.h \

FORMS += \
    GUI_LEVEL.ui \
    GUI_MODE.ui \
    option.ui \
    result_tictactoe.ui \
    tictactoe_ui.ui

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
    image/shadow.png \
    image/sound_off.png \
    image/sound_on.png \
    image/table.png \
    music/game_music.mp3
