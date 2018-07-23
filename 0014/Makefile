
subdir-y = \
	b

target.a-y = \
	liba.a

liba.a_files-y = \
	a.c \
	b/libb.o

target-y = \
	main

main_files-y = \
	main.c

main_ldflags-y = \
	-la

main_depends-y = \
	liba.a

liba.a_depends-y = \
	b

include ../Makefile.lib
