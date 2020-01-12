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
	$(CC) $(CFLAGS) -o interfaz.o -c $(SRC)/buscarPaciente.cpp $(SRC)/eliminarCita.cpp $(SRC)/modificarPaciente.cpp $(SRC)/mostrarCitas.cpp $(SRC)/mostrarPacientes.cpp $(SRC)/insertarCita.cpp

$(TARGET): cita.o
	$(CC) $(CFLAGS)  -o $(TARGET) cita.o main.cpp


clean:
	$(RM) *.o

cleanSistema:
	$(RM) *.o sistema
