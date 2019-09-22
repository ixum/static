bin_PROGRAMS  = csrun
csrun_SOURCES = csrun.c

## 头文件
csrun_CPPFLAGS    =      \
-I$(top_srcdir)/src/alge \
-I$(top_srcdir)/src/bft  \
-I$(top_srcdir)/src/cdo  \
-I$(top_srcdir)/src/comb 

## 动态库
csrun_LDADD      = \
$(top_srcdir)/src/alge/libalge.a \
$(top_srcdir)/src/bft/libbft.a   \
$(top_srcdir)/src/cdo/libcdo.a   \
$(top_srcdir)/src/comb/libcomb.a \
$(top_srcdir)/src/base/libbase.a \
$(top_srcdir)/src/cogz/libcogz.a 

AM_CFLAGS = -fprofile-arcs -ftest-coverage -lgfortran

export MAKEINCLUDE=${top_srcdir}/makeconfig/make.global
include ${MAKEINCLUDE}

cleanall: cleanallsubdirs
	-rm -f *.gcda *.gcov *.gcno

gcov: gcovsubdirs
	@echo "generating apps coverage ..."
	gcov -f *.c *.f90

gcovr: gcovrsubdirs
	gcovr -r . --html --html-details -o coverage.html

