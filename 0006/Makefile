
target-y = \
	multipleinheritance

multipleinheritance_files-y = \
	calculatorform.cpp \
	calculatorform.moc \
	ui/calculatorform.ui \
	main.cpp

multipleinheritance_cxxflags-y += \
	$(shell pkg-config Qt5Widgets --cflags)

multipleinheritance_ldflags-y += \
	$(shell pkg-config Qt5Widgets --libs)

include ../Makefile.lib
