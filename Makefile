.PHONY:all clean
CC=g++
CFLAGS=-Wall -Werror
SD=src/
OD=build/
EXECUTABLE=bin/geometry.exe
all: $(EXECUTABLE)
	
$(EXECUTABLE): $(OD)main.o $(OD)perimetr.o $(OD)area.o 
	$(CC) $(CFLAGS) -o $(EXECUTABLE) $(OD)main.o $(OD)perimetr.o $(OD)area.o -lm
$(OD)main.o: $(SD)main.cpp
	$(CC) $(CFLAGS) -c -o $(OD)main.o $(SD)main.cpp -lm
$(OD)perimetr.o: $(SD)perimetr.cpp
	$(CC) $(CFLAGS) -c -o $(OD)perimetr.o $(SD)perimetr.cpp -lm
$(OD)area.o: $(SD)area.cpp
	$(CC) $(CFLAGS) -c -o $(OD)square.o $(SD)area.cpp -lm
clean:
	rm -rf $(EXECUTABLE) $(OD)*.o
