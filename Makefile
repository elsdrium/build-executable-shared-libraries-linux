run: libexe.so program
	./libexe.so 11 22 33
	LD_LIBRARY_PATH=. ./program 111 222 333

libexe.so: libexe.c
	$(CC) -shared -o libexe.so -Wl,-soname,libexe.so -Wl,-E -fPIC -pie libexe.c

program: program.cpp
	$(CXX) -L. -lexe -o program program.cpp

clean:
	rm -f libexe.so program

.PHONY: run clean
