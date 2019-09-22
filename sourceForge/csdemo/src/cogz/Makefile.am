noinst_LIBRARIES = libcogz.a
libcogz_a_SOURCES = matmul.f90

AM_FCFLAGS      = 

AM_FCFLAGS     += -fprofile-arcs -ftest-coverage

export MAKEINCLUDE=${top_srcdir}/makeconfig/make.global
include ${MAKEINCLUDE}

cleanall: cleanallsubdirs
	-rm -f *.gcda *.gcov *.gcno

gcov: gcovsubdirs
	@echo "generating cogz coverage ..."
	gcov -f *.c *.f90

gcovr: gcovrsubdirs
	gcovr -r . --html --html-details -o coverage.html

