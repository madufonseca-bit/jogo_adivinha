#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5

// Chame essa função para preencher um vetor numero de tamanho n com um número
// aleatório entre 00000 e 99999
void gera_numero(int numero[], int n) {
  //srand(time(NULL));//ESTOU COMENTANDO PARA TESTAR MEU TESTE E VER SE TA CERTO QUANDO TERMINAR VOU TIRAR O COMENTARIO!

  for (int i = 0; i < n; ++i)
    numero[i] = rand() % 10;
}

// Chame essa função para percorrer o vetor numero e computar o número baseado nos
// elementos dela
int devolve_numero(int numero[], int n) {
  int num = 0;
  for (int i = 0; i < n; ++i)
    num = num * 10 + numero[i];
  return num;
}

// Chame essa função para imprimir o número  de algarismos corretos do número.
// Considere acertados como um vetor com n elementos, onde um elemento de valor
// 0 significa que o algarismo não foi encontrado, e 1 significa que foi
// encontrado
void imprime_acertados(int numero[], int acertados[], int n) {
  printf("Algarismos corretos: ");
  for (int i = 0; i < n; ++i) {
    if (acertados[i] == 1)
      printf("%d", numero[i]);
    else
      printf("_");
  }
  printf("\n");
}

int main() {

//PRINTS IMPORTANTES:
//printf("Gerei um numero aleatorio de 5 algarismos. Tente adivinhar!");
//printf("Digite o numero de tentativas para encontrar o numero: n_tentativas");
//printf("Digite um numero: 75000");
//printf("Algarismos corretos: 75___");
//printf("Parabens, voce adivinhou o numero 75132!");
//printf("Depois de n_tentativas tentativas, voce nao encontrou o numero 89014!");

//*****************************************************************************

  // ======== 1 e 2 - Inicialização e Configuração ========
  void gera_numero(int numero[TAM], int n)//COLOCAR TAM ESTÁ CERTO? ELE É UMA VARIÁVEL GLOBAL? 
  // gera_numero(...);
  printf("Gerei um número aleatório de %d algarismos. Tente adivinhar!\n", TAM); 
  // Pergunte ao usuário sobre a quantidade de tentativasa serem realizadas
  printf("Digite o numero de tentativas para encontrar o numero:(modificar) n_tentativas");//VOU MODIFICAR AQUI COLOCANDO A VARIÁVEL E TALS

  // ======== 3 - Loop do Jogo ========
  // Para um número de tentativas x, checa se o número lido está correto.

    //Como usar: A cada palpite incorreto do usuário, sua lógica na main deve primeiro
    //preencher um vetor acertados com 1 nas posições corretas e 0 nas erradas. Em
    //seguida, chame esta função para mostrar o feedback visual ao jogador.
  //PRECISO FAZER A LOGICA AQUI PARA COMPARAR SE O NUMERO FOR TRUE TRAZER PARA O USÚARIO SE NÃO TRAZER UM _
  // Para cada tentativa, caso não tenha acertado:
  //    imprime_acertados(...);
  void imprime_acertados(int numero[], int acertados[], int n)


  // ======== 4 - Finalização ========
  // Caso tenha encontrado o número, imprima:
  int devolve_numero(int numero[], int n)
  printf("Parabéns, você adivinhou o número %05d!\n", devolve_numero(...));
  // Caso tenha esgotado as tentativas sem encontrar o número, imprima:
  printf("Depois de %d tentativas, você não encontrou o número %05d!\n",...);
  return 0;
}
