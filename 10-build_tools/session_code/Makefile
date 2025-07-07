CC=g++
OBJ= doc.o stud.o main.o

test: $(OBJ)
	$(CC) -o $@ test main.o doc.o stud.o

%.o: %.cpp 
	$(CC) -c %<

.PHONY: clean cleanobj

clean:
	rm *.o
