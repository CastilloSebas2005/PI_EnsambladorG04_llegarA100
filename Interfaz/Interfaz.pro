QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    juego.cpp \
    main.cpp \
    mainwindow.cpp \
    playerComputer.cpp \
    playerHuman.cpp

HEADERS += \
    juego.h \
    mainwindow.h \
    playerModel.h \
    playerComputer.h \
    playerModel.h \
    playerHuman.h

FORMS += \
    juego.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    analizeCounter.s

nasm.name = nasm ${QMAKE_FILE_IN}
nasm.input = ASM_FILES
nasm.variable_out = OBJECTS
nasm.commands = nasm -f elf64 ${QMAKE_FILE_IN} -o ${QMAKE_FILE_OUT}
nasm.output = ${QMAKE_VAR_OBJECTS_DIR}${QMAKE_FILE_IN_BASE}$${first(QMAKE_EXT_OBJ)}
nasm.CONFIG += target_predeps

QMAKE_EXTRA_COMPILERS  += nasm

ASM_FILES += analizeCounter.s

# Configurar el directorio de salida para los archivos objeto y el ejecutable
DESTDIR = bin/
OBJECTS_DIR = bin/

# Crear la carpeta bin antes de compilar
QMAKE_PRE_LINK += mkdir -p bin

# Limpiar la carpeta bin al ejecutar make clean
QMAKE_CLEAN = bin/
