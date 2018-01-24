
target-y = \
	multipleinheritance

multipleinheritance_files-y = \
	calculatorform.cpp \
	calculatorform.moc \
	main.cpp

multipleinheritance_depends-y = \
	ui_calculatorform.h

multipleinheritance_cxxflags-y += \
	$(shell pkg-config Qt5Widgets --cflags)

multipleinheritance_ldflags-y += \
	$(shell pkg-config Qt5Widgets --libs)

include ../Makefile.lib

ui_calculatorform.h: calculatorform.ui
	${Q}echo "  UIC        ${CURDIR}/$@"
	${Q}uic $< -o $@

clean:
	${Q}${RM} ui_calculatorform.h
