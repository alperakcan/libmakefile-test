
target-y += \
	generate \

target-y += \
	score

generate_files-y = \
	generate.cpp

generate_cxxflags-y = \
	-std=c++11

score_files-y = \
	generated.h \
	logic.c \
	score.c

score_includes-y = \
	./

score_ldflags-y = \
	-lm

target.so-n = \
	libstrength.so

libstrength.so_files-y = \
	generated.h \
	logic.c \
	strength.c

include ../Makefile.lib

generated.h: generate
	${Q}./generate > generated.h

clean:
	${Q}${RM} generated.h
