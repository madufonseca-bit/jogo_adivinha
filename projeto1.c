#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define TAM 5

// Chame essa função para preencher um vetor numero de tamanho n com um número
// aleatório entre 00000 e 99999
void gera_numero(int numero[], int n) {
  
  srand(time(NULL));

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
    
  // ======== 1 e 2 - Inicialização e Configuração ========
  int n_tentativas,adivinhe;
  bool acertou;
  int v_num[TAM],v_adivinhe[TAM],n_acertos[TAM];
  
  gera_numero(v_num,TAM);
  
  printf("\nGerei um número aleatório de %d algarismos. Tente adivinhar!\n", TAM);
  
  // Pergunte ao usuário sobre a quantidade de tentativasa serem realizadas
  printf("Digite o numero de tentativas para encontrar o número: ");
  scanf("%d",&n_tentativas);
  
  
  
  // ======== 3 - Loop do Jogo ========
  for (int i=1; i<=n_tentativas; i++){
    printf("Digite um numero: ");
    scanf("%d",&adivinhe);
    
    //montando vetor digitado pelo numero do usuario
    acertou = true;
    for (int j = TAM-1; j>=0; j--){
        v_adivinhe[j]=adivinhe % 10;
        adivinhe/= 10;
        
        if(v_adivinhe[j]==v_num[j]){
            n_acertos[j]=1;
        }else{
            acertou = false;
            n_acertos[j]=0;
        }
    }

    imprime_acertados(v_num,n_acertos,TAM);
    
    
    if(acertou){
        printf("Parabéns, você adivinhou o número %05d!\n",devolve_numero(v_num,TAM));
        break;
    }
  }
  // Para um número de tentativas x, checa se o número lido está correto.
  // Para cada tentativa, caso não tenha acertado:
  //    imprime_acertados(...);
  
  // ======== 4 - Finalização ========
  // Caso tenha encontrado o número, imprima:
  
  // Caso tenha esgotado as tentativas sem encontrar o número, imprima:
  if(acertou==false){
    printf("Depois de %d tentativas, você não encontrou o número %05d!\n",n_tentativas,devolve_numero(v_num,TAM));
  }
  
  return 0;
}
