#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void criarOrdenado(int x, char nomeArquivo[]){ // Criando um arquivo de numeros em ordem crescente
   FILE *file = fopen(nomeArquivo, "w"); // o ponteiro FILE cria/abre o arquivo NOMEARQUVIO (atualmente vazio) para W(write) editá-lo.
   for (int i=1;i<=x;i++){
      fprintf(file, "%d\n", i);  // Escreve um numero e pula uma linha no arquivo apontado por FILE.
   }
   fclose(file); // close.
}
void criarInvertido(int x, char nomeArquivo[]){
   FILE *file = fopen(nomeArquivo, "w");
   for (int i=x;i>=1;i--){
      fprintf(file, "%d\n", i);
   }
   fclose(file);
}
void criarRandomico(int x, char nomeArquivo[]){
   FILE *file = fopen(nomeArquivo, "w");
   int chute;
   srand(time(NULL));
   for (int i=1;i<=x;i++){
      chute = (rand() * rand()) % 1000000;
      fprintf(file, "%d\n", chute);
   }
   fclose(file);
}
void lerArquivo(int x, char nomeArquivo[],int *buffer){
   FILE *file = fopen(nomeArquivo,"r");
   if(file == NULL){
      printf("\nArquivo corrompido ou nao existe.\n");
      return(1);
   }
   for(int i=0; i<=x ;i++){
      fscanf(file,"%d",&buffer[i]);
   }
   printf("\n posicao 1 = %d", buffer[0]);
   printf("\n posicao 2 = %d", buffer[1]);
   printf("\n posicao 3 = %d", buffer[2]);
   printf("\n posicao 4 = %d", buffer[3]);
   printf("\n posicao 5 = %d", buffer[4]);
   printf("\n posicao 6 = %d", buffer[5]);
   printf("\n posicao 7 = %d", buffer[6]);
   printf("\n posicao 8 = %d", buffer[7]);
   printf("\n posicao 9 = %d", buffer[8]);
   printf("\n posicao 10 = %d", buffer[9]);
/*
   printf("\n posicao 21 = %d", buffer[20]);
   printf("\n posicao 32 = %d", buffer[31]);
   printf("\n posicao 93 = %d", buffer[92]);
   printf("\n posicao 333 = %d", buffer[332]);
   printf("\n posicao 418 = %d", buffer[417]);
   printf("\n posicao 777 = %d", buffer[776]);
   printf("\n posicao 749000 = %d", buffer[748999]);
*/
   fclose(file);
}
