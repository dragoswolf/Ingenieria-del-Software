CC=g++
CFLAGS=-g -Wall  -Iinclude/
OBJ = main.o
SRC=src
HEADERS=include
TARGET=sistema
RM=rm

all: $(TARGET)

cita.o: $(SRC)/cita.cpp $(HEADERS)/cita.hpp
	$(CC) $(CFLAGS) -o cita.o -c $(SRC)/cita.cpp

interfaz.o: $(SRC)/ $(HEADERS)/interfaz.hpp
	$(CC) $(CFLAGS) -o interfaz.o -c $(SRC)/interfaz.cpp

database.o: $(SRC)/database.cpp $(HEADERS)/database.hpp
	$(CC) $(CFLAGS) -o database.o -c $(SRC)/database.cpp

$(TARGET): database.o
	$(CC) $(CFLAGS)  -o $(TARGET) database.o main.cpp


clean:
	$(RM) *.o

cleanSistema:
	$(RM) *.o sistema
