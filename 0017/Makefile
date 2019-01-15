
subdir-y = \
	b

target.so-y = \
	liba.so

liba.so_soname-y = \
	liba.so.1.0

liba.so_files-y = \
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
	liba.so

include ../Makefile.lib
