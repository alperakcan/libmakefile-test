
target-y = \
	multipleinheritance

multipleinheritance_files-y = \
	calculatorform.cpp \
	calculatorform.moc \
	ui/calculatorform.ui \
	pushButton.cpp \
	main.cpp

multipleinheritance_includes-y += \
	./

multipleinheritance_cxxflags-y += \
	$(shell pkg-config Qt5Widgets --cflags) -std=c++11

multipleinheritance_ldflags-y += \
	$(shell pkg-config Qt5Widgets --libs)

include ../Makefile.lib
