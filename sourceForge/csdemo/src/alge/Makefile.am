noinst_LIBRARIES   = libalge.a
libalge_a_SOURCES = alge.c

AM_CPPFLAGS      = -I$(top_srcdir)/src/alge

AM_CFLAGS = -fprofile-arcs -ftest-coverage

export MAKEINCLUDE=${top_srcdir}/makeconfig/make.global
include ${MAKEINCLUDE}

cleanall: cleanallsubdirs
	-rm -f *.gcda *.gcov *.gcno

gcov: gcovsubdirs
	@echo "generating alge coverage ..."
	gcov -f *.c *.f90

gcovr: gcovrsubdirs
	gcovr -r . --html --html-details -o coverage.html

