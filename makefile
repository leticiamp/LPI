# Makefile da disciplina Linguagem de Programação I
# Alunos: Letícia Pinheiro e Matheus Filgueira
# Avaliação prática I

CC = g++
PROG = $(BIN)/Jogo

OBJ = ./build
SRC = ./src
BIN = ./bin
INC = ./include

CPPFLAGS = -Wall -pedantic -std=c++11 -I$(INC)

OBJS = $(OBJ)/automovel.o $(OBJ)/concessionaria $(OBJ)/main.o

all: $(PROG)
	$(PROG)

$(PROG): $(OBJS)
	$(CC) $(CPPFLAGS) -o $(PROG) $(OBJS)

$(OBJ)/automovel.o: $(INC)/automovel.h
	$(CC) $(CPPFLAGS) -c $(SRC)/automovel.cpp -o $(OBJ)/automovel.o

$(OBJ)/concessionaria.o: $(INC)/concessionaria.h
	$(CC) $(CPPFLAGS) -c $(SRC)/concessionaria.cpp -o $(OBJ)/concessionaria.o

$(OBJ)/main.o: $(SRC)/main.cpp
	$(CC) $(CPPFLAGS) -c $(SRC)/main.cpp -o $(OBJ)/main.o

clean: 
	rm -f $(BIN)/*
	rm -f $(OBJ)/*