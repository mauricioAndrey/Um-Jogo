#include <stdio.h>

typedef struct {
    char nome[100];
    int nMedalhasOuro;
    int nMedalhasPrata;
    int nMedalhasBronze;
} Atleta;

typedef struct {
    char nome[50];
    Atleta *atletas;
    int qtd_atletas;
} Pais;

/*Le o arquivo binario olimpiadas.bin e carrega em vetor dinâmico 
todos os países envolvidos, bem como seus atletas e medalhas. Assuma 
que o arquivo pode nem existir*/
Pais *carregaPaises(int *nPaises);

/*Salva o vetor dinâmico baseado na estrutura Pais da 
RAM no arquivo binário olimpiadas.bin*/
void salvaPaises(Pais *paises, int nPaises);

/*Cria um vetor dinâmico de atletas, com suas medalhas, sempre 
perguntando ao usuário se deseja cadastrar mais atletas ou não*/
Atleta *cadastraAtletas(int *nAtletas);

/*Cadastra um país novo e seus atletas, chamando a função 
cadrastraAtletas. Note que esta função adiciona países novos ao vetor
dinâmico de países já existente*/
Pais *cadastraPaisEAtletas(Pais *paises, int *nPaises);

/*Lê nome de país do teclado e se ele for encontrado no vetor dinâmico, 
remove-o bem como seus Atletas*/
Pais *removePaisEAtletas(Pais *paises, int nAtletas);

/*Apresenta na tela o ranking dos países em termos das Medalhas 
conquistadas por seus atletas. A ordem é definida pela quantidade de 
medalhas de bronze, lembrando qu e1 medalha de ouro = 3 medalhas de 
bronze e 1 medalha de prata = 2 medalhas de bronze. Use caracteres
de controle de saída de C para o quadro de medalhas sair parecido com 
a figura.
*/
void apresentaRankimgPaises(Pais *paises, int nPaises);

/* EXEMPLO

--------------------------RANKING-------------------------------
Pos. | País                    | Ouro | Prata | Bronze | Total |
 1   | China                   | 5    | 2     | 2      | 9     |
 2   | Japao                   | 4    | 2     | 2      | 8     |
 3   | Coreia do Sul           | 4    | 2     | 1      | 7     |
 4   | Australia               | 4    | 2     | 0      | 6     |
 5   | United States           | 3    | 6     | 3      | 12    |
 6   | India                   | 0    | 1     | 2      | 3     |
----------------------------------------------------------------

*/


int main(){

    return 0;
}

