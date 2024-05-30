#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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
    int nome;
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
    
    for(int i=0; i<numBin; i++){

    }
    caixa->cartasBin->cor;



    return caixa;
}


