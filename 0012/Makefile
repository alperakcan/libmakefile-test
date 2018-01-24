
target-y = \
	multipleinheritance

multipleinheritance_files-y = \
	calculatorform/ui/calculatorform.ui \
	calculatorform/calculatorform.cpp \
	calculatorform/calculatorform.moc \
	main.cpp

multipleinheritance_cxxflags-y += \
	$(shell pkg-config Qt5Widgets --cflags)

multipleinheritance_ldflags-y += \
	$(shell pkg-config Qt5Widgets --libs)

include ../Makefile.lib
