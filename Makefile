CC=gcc
CFLAGS=-lm -Wall -g


OBJ=tTerreno.o main.o



terreno: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)
	echo "Compilado"

clean:
	rm -rf *.o terreno

run:
	./terreno