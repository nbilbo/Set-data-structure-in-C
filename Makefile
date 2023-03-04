BIN = ./bin
APPS = ./apps
INCLUDE = ./include
OBJ = ./obj
SRC = ./src


all: clean includes apps run

# compila os arquivos no diretorio apps.
apps: $(BIN)/main

# compila os arquivos que implementam os cabecalhos.
includes: set.o

# executa.
run: $(BIN)/main
	$<

# remove todos os arquivos binarios.
clean:
	rm -rf $(BIN)/* $(OBJ)/*

$(BIN)/%: $(APPS)/%.c
	gcc $<  $(OBJ)/*.o -I $(INCLUDE) -o $@

%.o: $(SRC)/%.c $(INCLUDE)/%.h 
	gcc -c $< -I $(INCLUDE) -o $(OBJ)/$@
