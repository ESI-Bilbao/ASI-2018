PRACT=practica-2

BINS= client

GCC=gcc

CFLAGS=
#EXTRAFLAGS= -D TRACE
EXTRAFLAGS=

# Por ejemplo LFLAGS sirve para poner la referencia a librerias al linker
#LFLAGS=-lpthread
LFLAGS=

all: $(BINS)

client: client.o
	$(GCC) $(LFLAGS) $< -o $@
	echo "Hecho" $(PRACT)/$@

client.o: client.c client.h
	echo "Reconstruyendo" $(PRACT)/$@ 
	$(GCC) -c $(CFLAGS) $(EXTRAFLAGS) $<

clean:
	echo "Limpiando $(PRACT)....."
	rm -f *.o
	rm -f $(BINS)
