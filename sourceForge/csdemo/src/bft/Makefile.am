noinst_LIBRARIES   = libbft.a
libbft_a_SOURCES = bft.c

AM_CPPFLAGS      = -I$(top_srcdir)/src/bft

AM_CFLAGS = -fprofile-arcs -ftest-coverage

export MAKEINCLUDE=${top_srcdir}/makeconfig/make.global
include ${MAKEINCLUDE}

cleanall: cleanallsubdirs
	-rm -f *.gcda *.gcov *.gcno

gcov: gcovsubdirs
	@echo "generating bft coverage ..."
	gcov -f *.c *.f90

gcovr: gcovrsubdirs
	gcovr -r . --html --html-details -o coverage.html

