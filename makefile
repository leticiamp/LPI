# Makefile da disciplina Linguagem de Programação I
# Alunos: Letícia Pinheiro e Bruno Alysson
# Avaliação prática II

CC = g++
PROG = $(BIN)/AP1

OBJ = ./build
SRC = ./src
BIN = ./bin
INC = ./include

CPPFLAGS = -Wall -ansi -pedantic -O0 -g -std=c++11 -I$(INC)

OBJS = $(OBJ)/automovel.o $(OBJ)/carro.o $(OBJ)/moto.o $(OBJ)/caminhao.o \
		$(OBJ)/concessionaria.o $(OBJ)/system.o $(OBJ)/main.o

all: dirs $(PROG)
	$(PROG)

.PHONY: dirs
dirs:
	mkdir -p $(OBJ)


$(PROG): $(OBJS)
	$(CC) $(CPPFLAGS) -o $(PROG) $(OBJS)

$(OBJ)/automovel.o: $(INC)/automovel.h
	$(CC) $(CPPFLAGS) -c $(SRC)/automovel.cpp -o $(OBJ)/automovel.o

$(OBJ)/carro.o: $(INC)/carro.h
	$(CC) $(CPPFLAGS) -c $(SRC)/carro.cpp -o $(OBJ)/carro.o

$(OBJ)/moto.o: $(INC)/moto.h
	$(CC) $(CPPFLAGS) -c $(SRC)/moto.cpp -o $(OBJ)/moto.o

$(OBJ)/caminhao.o: $(INC)/caminhao.h
	$(CC) $(CPPFLAGS) -c $(SRC)/caminhao.cpp -o $(OBJ)/caminhao.o

$(OBJ)/concessionaria.o: $(INC)/concessionaria.h
	$(CC) $(CPPFLAGS) -c $(SRC)/concessionaria.cpp -o $(OBJ)/concessionaria.o

$(OBJ)/system.o: $(SRC)/system.cpp
	$(CC) $(CPPFLAGS) -c $(SRC)/system.cpp -o $(OBJ)/system.o

$(OBJ)/main.o: $(SRC)/main.cpp
	$(CC) $(CPPFLAGS) -c $(SRC)/main.cpp -o $(OBJ)/main.o

clean: 
	rm -f $(BIN)/*
	rm -f $(OBJ)/*