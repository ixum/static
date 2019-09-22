# !/bin/bash
aclocal
autoheader
autoconf
libtoolize --automake
automake -a
./configure
make 
make run
make gcov