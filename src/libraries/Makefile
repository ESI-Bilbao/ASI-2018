GCC=gcc

BIN=test_lib

LIB= libutils.a
DIRLIB=/usr/local/lib
DIRINC=/usr/local/include
DIRTEST=test

LOCALDIRINC=inc

INCLUDES=$(DIRINC)/utils.h

LIBRARIES=$(DIRLIB)/libutils.a

HFLAGS= -I $(LOCALDIRINC)
CFLAGS=
CSHAREDFLAGS=-Wall -Werror
LSHAREDFLAGS=-shared
EXTRAFLAGS=

all: 
	make $(LIB)
	make $(BIN)

libutils.a: utils.o
	ar -cvq libutils.a utils.o

utils.o: utils/utils.c inc/utils.h
	$(GCC) -c $(CFLAGS) $(HFLAGS) $(EXTRAFLAGS) -c utils/utils.c -o utils.o

test_lib: utils/test_lib.c inc/utils.h libutils.a
	$(GCC) $(CFLAGS) $(HFLAGS) $(EXTRAFLAGS) utils/test_lib.c libutils.a -o test_lib

$(DIRLIB)/%.a: %.a
	echo "Installing library $@ ...."
	cp -a $< $@

$(DIRINC)/%.h: $(LOCALDIRINC)/%.h
	echo "Installing include $@ ...."
	cp -a $< $@

install: 
	make $(LIBRARIES)
	make $(INCLUDES)

clean-install: 
	rm -f $(LIBRARIES) $(INCLUDES)
	make clean

clean: 
	rm -f *.o
	rm -f $(BIN) $(LIB)
