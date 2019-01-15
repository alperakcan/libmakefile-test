
target-y = \
	multipleinheritance

multipleinheritance_files-y = \
	calculatorform.cpp \
	calculatorform.moc \
	main.cpp

multipleinheritance_cxxflags-y += \
	$(shell pkg-config Qt5Widgets --cflags) -std=c++11

multipleinheritance_ldflags-y += \
	$(shell pkg-config Qt5Widgets --libs)

include ../Makefile.lib

calculatorform.h: ui_calculatorform.h

ui_calculatorform.h: calculatorform.ui
	${Q}echo "  UIC        ${CURDIR}/$@"
	${Q}uic $< -o $@

clean:
	${Q}${RM} ui_calculatorform.h
