noinst_LIBRARIES = libbase.a
libbase_a_SOURCES = addfld.f90

AM_FCFLAGS      = -I$(top_srcdir)/src/base

AM_FCFLAGS     += -fprofile-arcs -ftest-coverage -fno-underscoring

export MAKEINCLUDE=${top_srcdir}/makeconfig/make.global
include ${MAKEINCLUDE}

cleanall: cleanallsubdirs
	-rm -f *.gcda *.gcov *.gcno

gcov: gcovsubdirs
	@echo "generating base coverage ..."
	gcov -f *.c *.f90

gcovr: gcovrsubdirs
	gcovr -r . --html --html-details -o coverage.html

