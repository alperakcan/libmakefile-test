
subdir-y = \
	$(sort $(filter-out libmakefile/,$(wildcard */)))

include Makefile.lib
