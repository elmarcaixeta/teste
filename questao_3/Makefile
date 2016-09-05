#Arquivo final executavel
BINFOLDER := bin/
#.hpp
INCFOLDER := inc/
#.c
SRCFOLDER := src/
#.o
OBJFOLDER := obj/

CC := gcc

CFLAGS := -Wall -g
#ou:
#CFLAGS := -Wall -ansi -I./inc

#quando chamar "SRCFILES" tudo que for .c vai ser colocado no lugar.
SRCFILES := $(wildcard src/*.c)

#Pega todos os arquivos .c da SRCFILES e copia para a pasta:
#obj com o formato .o
all: $(SRCFILES:src/%.c=obj/%.o)
	$(CC) $(CFLAGS) obj/*.o -o bin/prog -lm

#vai literalmente compilar o programa, classe por classe.
obj/%.o: src/%.c
	$(CC) $(CFLAGS) -c $< -o $@ -I./inc

#$< Pega o nome do primeiro arquivo.
#$@ Vai mandar os arquivos gerados para o alvo (/obj).
#-I ./inc vai procurar na pasta inc. (procurar os headers.

run: bin/prog
	bin/prog

.PHONY: clean
clean:
	rm -rf obj/*
	rm -rf bin/*