CC=g++
CFLAGS=-g -Wall  -I include/
OBJ = main.o
SRC=src
HEADERS=include
TARGET=sistema
MKDIR_P = mkdir -p
OUT_DIR = pacientes
RM=rm

directories: ${OUT_DIR}
${OUT_DIR}:
	${MKDIR_P} ${OUT_DIR}

all: $(directories) $(TARGET)

cita.o: $(SRC)/cita.cpp $(HEADERS)/cita.hpp
	$(CC) $(CFLAGS) -o cita.o -c $(SRC)/cita.cpp

paciente.o: $(SRC)/paciente.cpp $(HEADERS)/paciente.hpp
	$(CC) $(CFLAGS) -o paciente.o -c $(SRC)/paciente.cpp

tratamiento.o: $(SRC)/tratamiento.cpp $(HEADERS)/tratamiento.hpp
	$(CC) $(CFLAGS) -o tratamiento.o -c $(SRC)/tratamiento.cpp	

interfaz.o: $(SRC)/interfaz.cpp $(HEADERS)/interfaz.hpp
	$(CC) $(CFLAGS) -o interfaz.o -c $(SRC)/interfaz.cpp

database.o: $(SRC)/database.cpp $(HEADERS)/database.hpp
	$(CC) $(CFLAGS) -o database.o -c $(SRC)/database.cpp 

$(TARGET): database.o cita.o tratamiento.o paciente.o interfaz.o
	$(CC) $(CFLAGS)  -o $(TARGET) cita.o paciente.o tratamiento.o interfaz.o database.o main.cpp


clean:
	$(RM) *.o

cleanSistema:
	$(RM) *.o sistema