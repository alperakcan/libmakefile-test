
target.a-y = \
	liba.a

liba.a_files-y = \
	a.c \
	b/b.c

liba.a_b/b.c_cflags-y = \
	-DLIBB_FLAG=1

target-y = \
	main

main_files-y = \
	main.c

main_ldflags-y = \
	-la

main_depends-y = \
	liba.a

include ../Makefile.lib
