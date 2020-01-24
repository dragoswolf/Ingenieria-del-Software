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

paciente.o: $(SRC)/paciente.cpp $(HEADERS)/paciente.hpp
	$(CC) $(CFLAGS) -o paciente.o $(SRC)/paciente.cpp

historial.o: $(SRC)/historial.cpp $(HEADERS)/historial.hpp
	$(CC) $(CFLAGS) -o historial.o $(SRC)/historial.cpp

registro.o: $(SRC)/registro.cpp $(HEADERS)/registro.hpp
	$(CC) $(CFLAGS) -o registro.o $(SRC)/registro.cpp

tratamiento.o: $(SRC)/tratamiento.cpp $(HEADERS)/tratamiento.hpp
	$(CC) $(CFLAGS) -o tratamiento.o $(SRC)/tratamiento.cpp	

interfaz.o: $(SRC)/interfaz.cpp $(HEADERS)/interfaz.hpp
	$(CC) $(CFLAGS) -o interfaz.o -c $(SRC)/interfaz.cpp

database.o: $(SRC)/database.cpp $(HEADERS)/database.hpp
	$(CC) $(CFLAGS) -o database.o -c $(SRC)/database.cpp

$(TARGET): database.o
	$(CC) $(CFLAGS)  -o $(TARGET) database.o main.cpp


clean:
	$(RM) *.o

cleanSistema:
	$(RM) *.o sistema
