#DECLARAÇÕES

#diretórios
SRC_DIR = src
LIB_DIR = $(SRC_DIR)/lib
EXE_DIR = output
UNO_DIR = UnoThings

#executavel
TARGET = $(EXE_DIR)/main

#arquivoFonte
SRC = $(SRC_DIR)/extraUno.c
defUNO_SRC = $(LIB_DIR)/definesUno.c

#objetos
defUNO_OBJ = $(LIB_DIR)/definesUno.o
defUNO_A = $(LIB_DIR)/libdefinesUno.a

#compilador
CC = gcc

#flags
CFLAGS = -Wall -g -I$(LIB_DIR)

#bibliotecas a mais
LIBS = -L$(LIB_DIR) -ldefinesUno

#=================================================

#TAGS

all: $(TARGET)
#regra para compilar o executável a partir do arquivo fonte
$(TARGET): $(defUNO_A) $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC) $(LIBS)

#regra para compilar a biblioteca estática
$(defUNO_A): $(defUNO_OBJ)
	ar rcs $(defUNO_A) $(defUNO_OBJ)

#regra para compilar o arquivo objeto da biblioteca
$(defUNO_OBJ): $(defUNO_SRC) $(LIB_DIR)/definesUno.h
	$(CC) $(CFLAGS) -c $(defUNO_SRC) -o $(defUNO_OBJ)

#=================================================

#REGRAS ESPECIAIS

#executa o arquivo executável
check: $(TARGET)
	./$(TARGET)

#limpa os arquivos feitos
clean:
	rm -r $(TARGET) $(EXE_DIR)/*.o $(EXE_DIR)/*.a $(LIB_DIR)/*.o $(LIB_DIR)/*.a 
