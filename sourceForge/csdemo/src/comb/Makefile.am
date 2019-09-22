noinst_LIBRARIES   = libcomb.a
libcomb_a_SOURCES = comb.c

AM_CPPFLAGS      = -I$(top_srcdir)/src/comb

AM_CFLAGS = -fprofile-arcs -ftest-coverage

export MAKEINCLUDE=${top_srcdir}/makeconfig/make.global
include ${MAKEINCLUDE}

cleanall: cleanallsubdirs
	-rm -f *.gcda *.gcov *.gcno

gcov: gcovsubdirs
	@echo "generating comb coverage ..."
	gcov -f *.c *.f90

gcovr: gcovrsubdirs
	gcovr -r . --html --html-details -o coverage.html

