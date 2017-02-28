PRACT=practica-1

BINS= client

GCC=gcc

CFLAGS=
EXTRAFLAGS= -D TRACE

# Por ejemplo LFLAGS sirve para poner la referencia a librerias al linker
#LFLAGS=-lpthread
LFLAGS=

all: $(BINS)

client: client.o
	echo "Creando fichero client...."
	$(GCC) $(LFLAGS) client.o -o client
	echo "Construido" client

client.o: client.c client.h
	$(GCC) -c $(CFLAGS) $(EXTRAFLAGS) client.c

clean:
	echo "Limpiando la PRACTICA-1....."
	rm -f *.o
	rm -f $(BINS)
