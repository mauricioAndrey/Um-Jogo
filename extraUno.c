#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

//===============================================================
//Defines

enum cores{
    Azul = 0, 
    Vermelho, 
    Verde, 
    Amarelo, 
    Preto
};

enum efeito{
    Nenhum,
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
    int cor; //4 cores
}cartasNUM;

typedef struct cartasEsp{
    char nome[50];
    int cor;
    int efeito;
}cartasEsp;

typedef struct cartasLog{
    int nome;
    int efeito1;
    int efeito2;
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

baralho* inicializaBaralho(){
    baralho* caixa = (baralho*)malloc(sizeof(baralho)*1);

    caixa->tam = numBin+numEspCor+numEsp+numLog;
    
    int cores = 0;
    for(int i=0; i<numBin; i++){
        caixa->cartasBin[i].num = i % 10; //num de 0 a 9
        if(i < 20) cores = Azul;
        else if(i >= 20 && i<40) cores = Amarelo;
        else if(i >= 40 && i<60) cores = Verde;
        else if(i>=60 && i<80) cores = Vermelho;
        caixa->cartasBin[i].cor = cores;
    }
    int efeito;
    char nomes[50];
    for(int i=0; i<numEspCor; i++){
        //alterna a cor de 6 em 6
        if(i<6) cores = Azul;
        else if(i>=6 && i<12) cores = Amarelo;
        else if(i>=12 && i<18) cores = Verde;
        else if(i>=18 && i<24) cores = Vermelho;
        //alterna os 3 nomes a cada duas cartas
        if(i%3==0) {strcpy(nomes,"MaisDois\0"); efeito = MaisDois;}
        else if(i%3==1) {strcpy(nomes,"Bloqueio\0"); efeito = Bloqueia;}
        else if(i%3==2) {strcpy(nomes, "InverteDirecao\0"); efeito = InverteDirecao;}
        //atribuições
        strcpy(caixa->cartasEspCor[i].nome, nomes);
        caixa->cartasEspCor[i].cor = cores;
        caixa->cartasEspCor[i].efeito = efeito;
    }



    return caixa;
}


