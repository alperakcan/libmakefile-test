# libmakefile-test

libmakefile-test

## clone

    git clone https://github.com/alperakcan/libmakefile-test.git libmakefile-test.git
    cd libmakefile-test
    git submodule update --init --recursive

## run

    cd libmakefile-test
    make

## tests

- 0000: empty project
- 0001: using common files from outer directory
- 0002: using common files from outer (far away) directory
- 0003: qt using moc support, uic using target-depends-y
- 0004: qt using moc support, uic using file.h: rule
- 0005: qt using moc and uic support
- 0006: qt using moc and uic support, ui files from outer directory
- 0007: qt using moc and uic support, ui files from outer (far away) directory
- 0008: generated header file
- 0009: multiple ui files
- 0010: custom class in ui file (with includes-y)
- 0010: custom class in ui file (with default includes)
