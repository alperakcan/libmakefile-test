
subdir-y = \
	b

target.a-y = \
	liba.a

liba.a_files-y = \
	a.c

target-y = \
	main

main_files-y = \
	main.c

main_ldflags-y = \
	-la \
	-Lb -lb

main_depends-y = \
	b \
	liba.a

include ../Makefile.lib
