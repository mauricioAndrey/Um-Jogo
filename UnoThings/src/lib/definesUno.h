#ifndef _DEFINES_UNO_
#define _DEFINES_UNO_

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//=====================================================================

void teste(void);

//=====================================================================
//Defines

enum cores{
    Azul = 0, 
    Vermelho, 
    Verde, 
    Amarelo, 
    Preto
};

enum efeito{
    Nenhum = 0,
    //com cor
    MaisDois,
    InverteDirecao,
    Bloqueia,
    //cor preta
    EscolheCor, 
    MaisQuatro, 
    //logicas
    TrocaMaos,
    EscolheEfeito,
    ManterCor, 
    Quebrar
}; 

enum numCartas{
    numBin = 80, //eh o dobro
    numEspCor = 24, 
    numEsp = 6, 
    numLog = 10
};

typedef struct cartasNUM{
    int num; //de 0 a 9
    int size;
    enum cores cor; //4 cores
    bool usada;
}cartasNUM;

typedef struct cartasEsp{
    char nome[50];
    int size;
    enum cores cor;
    enum efeito efeito;
    bool usada;
}cartasEsp;

typedef struct cartasLog{
    char nome[50];
    int size;
    enum efeito efeito1;
    enum efeito efeito2;
    bool usada;
}cartasLog;

typedef struct baralho{
    int tam; //40+24+6+10=120
    cartasNUM cartasBin[numBin]; //10 para cada cor
    cartasEsp cartasEspCor[numEspCor]; //block, direction, +2
    cartasEsp cartasEspPret[numEsp]; //+4, mudaCor
    cartasLog cartasLogicas[numLog]; //exit, if, if not,  while, break
}baralho;

typedef struct jogador{
    int cartasMao;
    cartasNUM* cartasBin;
    cartasEsp* cartasEspCor;
    cartasEsp* cartasEspPret;
    cartasLog* cartasLogicas;
}jogador;

//=====================================================================

baralho* inicializaBaralho();

void freeBaralho(baralho* bar);

void printBaralho(baralho* bar);

//=====================================================================

//escolha das cartas
int escolheNumBin(baralho* bar, int valor);
int escolheEspCor(baralho* bar, int valor);
int escolheEsp(baralho* bar, int valor);
int escolheLog(baralho* bar, int valor);
jogador* inicializaJogadores(baralho* bar, int tam);

void printJogadores(jogador* jor, int size);

void freeJogadores(jogador* jor, int size);

//=====================================================================

#endif