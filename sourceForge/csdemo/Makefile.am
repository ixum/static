SUBDIRS          = src
EXTRA_DIST       = doc data exxamples preprocessor test

# recursive make
export MAKEINCLUDE=${top_srcdir}/makeconfig/make.global
# include "make global scripts"
include ${MAKEINCLUDE}

.PHONY: cleanall gcov gcovr run

cleanall: cleanallsubdirs
	-rm -f *.gcda *.gcov *.gcno

gcov: gcovsubdirs
	@echo "generating main coverage ..."
	gcov -f *.c *.f90

gcovr: gcovrsubdirs
	gcovr -r . --html --html-details -o coverage.html

run:
	./src/apps/csrun