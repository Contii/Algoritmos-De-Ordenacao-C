#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <dos.h>

clock_t tempo; //variável para armazenar tempo

void bubbleSort(int x, int* buffer){
   tempo = clock(); //armazenando o tempo
   int i, j, aux;
   printf("\nBubbleSort iniciado, aguarde o resultado...\n");
   for (i=0; i<x-1 ;i++){
      for (j=0; j<x-(i+1) ;j++){
         if (buffer[j] > buffer[j+1]){
            aux       = buffer[j];
            buffer[j]   = buffer[j+1];
            buffer[j+1] = aux;
         }
      }
   }
   tempo = clock() - tempo; // subtraindo o tempo final pelo inicial.
   printf("\n posicao 1 = %d", buffer[0]);
   printf("\n posicao 2 = %d", buffer[1]);
   printf("\n posicao 3 = %d", buffer[2]);
   printf("\n posicao 21 = %d", buffer[20]);
   printf("\n posicao 32 = %d", buffer[31]);
   printf("\n posicao 93 = %d", buffer[92]);
   printf("\n posicao 333 = %d", buffer[332]);
   printf("\n posicao 418 = %d", buffer[417]);
   printf("\n posicao 777 = %d", buffer[776]);
   printf("\n posicao 749000 = %d", buffer[748999]);
   printf("\n\nTempo de execucao: %.4f segundos.", ((double)tempo)/((CLOCKS_PER_SEC))); // imprimindo tempo em segundos convertido para double.
   printf("\nTempo de execucao: %.2f minutos.", (((double)tempo)/((CLOCKS_PER_SEC))/60)); // imprimindo tempo em minutos convertido para double.
   printf("\nTempo de execucao: %.2f horas.\n", ((((double)tempo)/((CLOCKS_PER_SEC))/60)/60)); // imprimindo tempo em horas convertido para double.
}
void insertSort(int x, int* buffer){
   tempo = clock(); //armazenando o tempo
   int i, j, aux;
   printf("\nInsertSort iniciado, aguarde o resultado...\n");
   for (i = 1; i <= x - 1 ;i++) { // percorre todo o vetor
      j = i;
      while ( j > 0 && buffer[j] < buffer[j-1]) { // enquanto o numero dentro de buffer[j] for menor que seu antecessor buffer[j-1] faz a troca
         aux          = buffer[j];
         buffer[j]   = buffer[j-1];
         buffer[j-1] = aux;
         j--;
      }
   }
   tempo = clock() - tempo; // subtraindo o tempo final pelo inicial.
   printf("\n posicao 1 = %d", buffer[0]);
   printf("\n posicao 2 = %d", buffer[1]);
   printf("\n posicao 3 = %d", buffer[2]);
   printf("\n posicao 21 = %d", buffer[20]);
   printf("\n posicao 32 = %d", buffer[31]);
   printf("\n posicao 93 = %d", buffer[92]);
   printf("\n posicao 333 = %d", buffer[332]);
   printf("\n posicao 418 = %d", buffer[417]);
   printf("\n posicao 777 = %d", buffer[776]);
   printf("\n posicao 749000 = %d", buffer[748999]);
   printf("\n\nTempo de execucao: %.4f segundos.", ((double)tempo)/((CLOCKS_PER_SEC))); // imprimindo tempo em segundos convertido para double.
   printf("\nTempo de execucao: %.2f minutos.", (((double)tempo)/((CLOCKS_PER_SEC))/60)); // imprimindo tempo em minutos convertido para double.
   printf("\nTempo de execucao: %.2f horas.\n", ((((double)tempo)/((CLOCKS_PER_SEC))/60)/60)); // imprimindo tempo em horas convertido para double.
}
void shellSort(int x, int *buffer){
   tempo = clock(); //armazenando o tempo
   int i, j, h=1, aux;
   printf("\nShellSort iniciado, aguarde o resultado...\n");
   while(h < x){
      h = 3*h+1;
   }
   while(h > 0){
      for(i = h; i < x ;i++){
         aux = buffer[i];
         j = i;
         while(j > h-1 && aux <= buffer[j - h]){
            buffer[j] = buffer[j - h];
            j = j - h;
         }
         buffer[j] = aux;
      }
      h = h/3;
   }
   tempo = clock() - tempo; // subtraindo o tempo final pelo inicial.
   printf("\n posicao 1 = %d", buffer[0]);
   printf("\n posicao 2 = %d", buffer[1]);
   printf("\n posicao 3 = %d", buffer[2]);
   printf("\n posicao 21 = %d", buffer[20]);
   printf("\n posicao 32 = %d", buffer[31]);
   printf("\n posicao 93 = %d", buffer[92]);
   printf("\n posicao 333 = %d", buffer[332]);
   printf("\n posicao 418 = %d", buffer[417]);
   printf("\n posicao 777 = %d", buffer[776]);
   printf("\n posicao 749000 = %d", buffer[748999]);
   printf("\n\nTempo de execucao: %.4f segundos.", ((double)tempo)/((CLOCKS_PER_SEC))); // imprimindo tempo em segundos convertido para double.
   printf("\nTempo de execucao: %.2f minutos.", (((double)tempo)/((CLOCKS_PER_SEC))/60)); // imprimindo tempo em minutos convertido para double.
   printf("\nTempo de execucao: %.2f horas.\n", ((((double)tempo)/((CLOCKS_PER_SEC))/60)/60)); // imprimindo tempo em horas convertido para double.
}
void selectionSort(int x, int *buffer){
   tempo = clock(); //armazenando o tempo
   int i, j, min, aux;
   printf("\nSelectionSort iniciado, aguarde o resultado...\n");
   for (i = 0; i < (x-1) ;i++) {
      min = i;
      for (j = (i+1); j < x ;j++) {
         if(buffer[j] < buffer[min])
            min = j;
      }
      if(i != min){
         aux = buffer[i];
         buffer[i] = buffer[min];
         buffer[min] = aux;
     }
   }
   tempo = clock() - tempo; // subtraindo o tempo final pelo inicial.
   printf("\n posicao 1 = %d", buffer[0]);
   printf("\n posicao 2 = %d", buffer[1]);
   printf("\n posicao 3 = %d", buffer[2]);
   printf("\n posicao 21 = %d", buffer[20]);
   printf("\n posicao 32 = %d", buffer[31]);
   printf("\n posicao 93 = %d", buffer[92]);
   printf("\n posicao 333 = %d", buffer[332]);
   printf("\n posicao 418 = %d", buffer[417]);
   printf("\n posicao 777 = %d", buffer[776]);
   printf("\n posicao 749000 = %d", buffer[748999]);
   printf("\n\nTempo de execucao: %.4f segundos.", ((double)tempo)/((CLOCKS_PER_SEC))); // imprimindo tempo em segundos convertido para double.
   printf("\nTempo de execucao: %.2f minutos.", (((double)tempo)/((CLOCKS_PER_SEC))/60)); // imprimindo tempo em minutos convertido para double.
   printf("\nTempo de execucao: %.2f horas.\n", ((((double)tempo)/((CLOCKS_PER_SEC))/60)/60)); // imprimindo tempo em horas convertido para double.
}
///........................................
void quickSortRecursivo(int esquerda, int direita, int *buffer){
   tempo = clock(); //armazenando o tempo
   printf("\nQuickSort iniciado, aguarde o resultado...\n");
   quickSort(esquerda,direita,buffer);
   tempo = clock() - tempo; // subtraindo o tempo final pelo inicial.
   printf("\n posicao 1 = %d", buffer[0]);
   printf("\n posicao 2 = %d", buffer[1]);
   printf("\n posicao 3 = %d", buffer[2]);
   printf("\n posicao 21 = %d", buffer[20]);
   printf("\n posicao 32 = %d", buffer[31]);
   printf("\n posicao 93 = %d", buffer[92]);
   printf("\n posicao 333 = %d", buffer[332]);
   printf("\n posicao 418 = %d", buffer[417]);
   printf("\n posicao 777 = %d", buffer[776]);
   printf("\n posicao 749000 = %d", buffer[748999]);
   printf("\n\nTempo de execucao: %.4f segundos.", ((double)tempo)/((CLOCKS_PER_SEC))); // imprimindo tempo em segundos convertido para double.
   printf("\nTempo de execucao: %.2f minutos.", (((double)tempo)/((CLOCKS_PER_SEC))/60)); // imprimindo tempo em minutos convertido para double.
   printf("\nTempo de execucao: %.2f horas.\n", ((((double)tempo)/((CLOCKS_PER_SEC))/60)/60)); // imprimindo tempo em horas convertido para double.
}
void quickSort(int esquerda, int direita, int *buffer) {
   int i, j, x, aux;
   i = esquerda;
   j = direita;
   x = buffer[(esquerda + direita) / 2];
   while(i <= j){
      while(buffer[i] < x && i < direita){
         i++;
      }
      while(buffer[j] > x && j > esquerda){
         j--;
      }
      if(i <= j){
         aux = buffer[i];
         buffer[i] = buffer[j];
         buffer[j] = aux;
         i++;
         j--;
      }
   }

   if(j > esquerda){
      quickSort(esquerda, j, buffer);
   }

   if(i < direita){
      quickSort(i, direita, buffer);
   }
}
///........................................
void mergeSort(int *buffer, int tam){
   tempo = clock(); //armazenando o tempo
   int *c = malloc(sizeof(int) * tam);
   printf("\nMergeSort iniciado, aguarde o resultado...\n");
   sort(buffer, c, 0, tam - 1);
   free(c);
   tempo = clock() - tempo; // subtraindo o tempo final pelo inicial.
   printf("\n posicao 1 = %d", buffer[0]);
   printf("\n posicao 2 = %d", buffer[1]);
   printf("\n posicao 3 = %d", buffer[2]);
   printf("\n posicao 21 = %d", buffer[20]);
   printf("\n posicao 32 = %d", buffer[31]);
   printf("\n posicao 93 = %d", buffer[92]);
   printf("\n posicao 333 = %d", buffer[332]);
   printf("\n posicao 418 = %d", buffer[417]);
   printf("\n posicao 777 = %d", buffer[776]);
   printf("\n posicao 749000 = %d", buffer[748999]);
   printf("\n\nTempo de execucao: %.4f segundos.", ((double)tempo)/((CLOCKS_PER_SEC))); // imprimindo tempo em segundos convertido para double.
   printf("\nTempo de execucao: %.2f minutos.", (((double)tempo)/((CLOCKS_PER_SEC))/60)); // imprimindo tempo em minutos convertido para double.
   printf("\nTempo de execucao: %.2f horas.\n", ((((double)tempo)/((CLOCKS_PER_SEC))/60)/60)); // imprimindo tempo em horas convertido para double.
}
void sort(int *buffer, int *c, int i, int f){
   int m = (i + f) / 2;
   if(i >= f)
      return;
   sort(buffer, c, i, m);
   sort(buffer, c, m + 1, f);
   if (buffer[m] <= buffer[m + 1])
      return;
   merge(buffer, c, i, m, f);
}
void merge(int *buffer, int *c, int i, int m, int f) {
   int z, iv = i, ic = m + 1;
   for(z = i; z <= f; z++)
      c[z] = buffer[z];
   z = i;
   while (iv <= m && ic <= f) {

      if (c[iv] <= c[ic])
         buffer[z++] = c[iv++];
      else
         buffer[z++] = c[ic++];
   }
   while (iv <= m)
      buffer[z++] = c[iv++];
   while (ic <= f)
      buffer[z++] = c[ic++];
}
///........................................


