#include <stdio.h>
#include <stdlib.h>     /* srand, rand */
#include <time.h>
#include "criacaoArquivos.h"
#include "funcoesOrdenacao.h"

void main(){
   int tam, menu;
   int *buffer = NULL;
   char nomeArquivo[255];

   do{
    system("cls || clear");
    printf("Ordenacao de numeros em arquivo.txt\n\n");
    printf("1 - Criar arquivos\n");
    printf("2 - BubbleSort\n");
    printf("3 - InsertSort\n");
    printf("4 - ShelllSort\n");
    printf("5 - SelectionSort\n");
    printf("6 - QuickSort\n");
    printf("7 - MergeSort\n");
    printf("9 - Teste\n");
    printf("0 - Sair\n\n");
    scanf("%d", &menu);
    switch(menu){

       case 1:
          do{
           system("cls || clear");
           printf("----Criacao de arquivos----\n");
           printf("\n1 - Arquivo 1m");
           printf("\n2 - Arquivo 750k");
           printf("\n0 - Voltar\n\n");
           scanf("%d", &menu);

           switch(menu){
              case 1:
                 tam = 1000000;
                 do{
                  system("cls || clear");
                  printf("----Criacao de arquivo 1m----\nInforme o tipo do arquivo:\n");
                  printf("\n1 - Ordenado");
                  printf("\n2 - Invertido");
                  printf("\n3 - Randomico");
                  printf("\n0 - Voltar\n\n");
                  scanf("%d", &menu);

                  switch(menu){
                     case 1:
                        sprintf(nomeArquivo, "Ordenado%07d.txt", tam); //O vetor nomeArquivo ira receber uma string contendo TAM em sua escrita.
                        criarOrdenado(tam, nomeArquivo);
                        printf("\n Arquivo '%s' Criado!", nomeArquivo);
                        getch();
                        break;

                     case 2:
                        sprintf(nomeArquivo, "Invertido%07d.txt", tam); //O vetor nomeArquivo ira receber uma string contendo TAM em sua escrita.
                        criarInvertido(tam, nomeArquivo);
                        printf("\n Arquivo '%s' Criado!", nomeArquivo);
                        getch();
                        break;

                     case 3:
                        sprintf(nomeArquivo, "Randomico%07d.txt", tam); //O vetor nomeArquivo ira receber uma string contendo TAM em sua escrita.
                        criarRandomico(tam, nomeArquivo);
                        printf("\n Arquivo '%s' Criado!", nomeArquivo);
                        getch();
                        break;

                     case 0:
                        break;

                     default:
                        printf("\nDigite uma opcao valida!\n");
                        getch();
                  }
                 }while(menu != 0);
                 break;

              case 2:
                 tam = 750000;
                 do{
                  system("cls || clear");
                  printf("----Criacao de arquivo 750k----\nInforme o tipo do arquivo:\n");
                  printf("\n1 - Ordenado");
                  printf("\n2 - Invertido");
                  printf("\n3 - Randomico");
                  printf("\n0 - Voltar\n\n");
                  scanf("%d", &menu);

                  switch(menu){
                     case 1:
                        sprintf(nomeArquivo, "Ordenado%06d.txt", tam); //O vetor nomeArquivo ira receber uma string contendo TAM em sua escrita.
                        criarOrdenado(tam, nomeArquivo);
                        printf("\n Arquivo '%s' Criado!", nomeArquivo);
                       getch();
                       break;

                     case 2:
                        sprintf(nomeArquivo, "Invertido%06d.txt", tam); //O vetor nomeArquivo ira receber uma string contendo TAM em sua escrita.
                        criarInvertido(tam, nomeArquivo);
                        printf("\n Arquivo '%s' Criado!", nomeArquivo);
                        getch();
                        break;

                     case 3:
                        sprintf(nomeArquivo, "Randomico%06d.txt", tam); //O vetor nomeArquivo ira receber uma string contendo TAM em sua escrita.
                        criarRandomico(tam, nomeArquivo);
                        printf("\n Arquivo '%s' Criado!", nomeArquivo);
                        getch();
                        break;

                     case 0:
                        break;

                     default:
                        printf("\nDigite uma opcao valida!\n");
                        getch();
                  }
                 }while(menu != 0);
                 break;

              case 0:
                 menu = -1;
                 break;

              default:
                 printf("\nDigite uma opcao valida!\n");
                 getch();
           }
          }while(menu != -1);
          menu = NULL;
          break;

       case 2:
          do{
           system("cls || clear");
           printf("----bubbleSort de arquivos----\n");
           printf("\n1 - Arquivo 1m");
           printf("\n2 - Arquivo 750k");
           printf("\n0 - Voltar\n\n");
           scanf("%d", &menu);

           switch(menu){
              case 1:
                 tam = 1000000;
                 do{
                  system("cls || clear");
                  printf("----bubbleSort de 1m----\nInforme o tipo do arquivo:\n");
                  printf("\n1 - Ordenado");
                  printf("\n2 - Invertido");
                  printf("\n3 - Randomico");
                  printf("\n0 - Voltar\n\n");
                  scanf("%d", &menu);
                  switch(menu){
                     case 1:
                        free(buffer);
                        buffer =  (int *) malloc (1000000 * sizeof(int));
                        sprintf(nomeArquivo, "Ordenado%07d.txt", tam);
                        printf("\nArmazenando '%s' no Buffer...\n", nomeArquivo);
                        getch();
                        lerArquivo(tam, nomeArquivo, buffer);
                        printf("\n\nPressione uma tecla para iniciar o bubbleSort.\n");
                        getch();
                        bubbleSort(tam, buffer);
                        printf("\nbubbleSort 1m Ordenado Concluido!");
                        getch();
                        break;

                     case 2:
                        free(buffer);
                        buffer =  (int *) malloc (1000000 * sizeof(int));
                        sprintf(nomeArquivo, "Invertido%07d.txt", tam);
                        printf("\nArmazenando '%s' no Buffer...\n", nomeArquivo);
                        getch();
                        lerArquivo(tam, nomeArquivo, buffer);
                        printf("\n\nPressione uma tecla para iniciar o bubbleSort.\n");
                        getch();
                        bubbleSort(tam, buffer);
                        printf("\nbubbleSort 1m Invertido Concluido!");
                        getch();
                        break;

                     case 3:
                        free(buffer);
                        buffer =  (int *) malloc (1000000 * sizeof(int));
                        sprintf(nomeArquivo, "Randomico%07d.txt", tam);
                        printf("\nArmazenando '%s' no Buffer...\n", nomeArquivo);
                        getch();
                        lerArquivo(tam, nomeArquivo, buffer);
                        printf("\n\nPressione uma tecla para iniciar o bubbleSort.\n");
                        getch();
                        bubbleSort(tam, buffer);
                        printf("\nbubbleSort 1m Randomico Concluido!");
                        getch();
                        break;

                     case 0:
                       break;

                     default:
                        printf("\nDigite uma opcao valida!\n");
                        getch();
                  }
                 } while(menu != 0);
                 break;

              case 2:
                 tam = 750000;
                 do{
                  system("cls || clear");
                  printf("----bubbleSort de 750k----\nInforme o tipo do arquivo:\n");
                  printf("\n1 - Ordenado");
                  printf("\n2 - Invertido");
                  printf("\n3 - Randomico");
                  printf("\n0 - Voltar\n\n");
                  scanf("%d", &menu);
                  switch(menu){
                     case 1:
                        free(buffer);
                        buffer =  (int *) malloc (750000 * sizeof(int));
                        sprintf(nomeArquivo, "Ordenado%06d.txt", tam);
                        printf("\nArmazenando '%s' no Buffer...\n", nomeArquivo);
                        getch();
                        lerArquivo(tam, nomeArquivo, buffer);
                        printf("\n\nPressione uma tecla para iniciar o bubbleSort.\n");
                        getch();
                        bubbleSort(tam, buffer);
                        printf("\nbubbleSort 750k Ordenado Concluido!");
                        getch();
                        break;

                     case 2:
                        free(buffer);
                        buffer =  (int *) malloc (750000 * sizeof(int));
                        sprintf(nomeArquivo, "Invertido%06d.txt", tam);
                        printf("\nArmazenando '%s' no Buffer...\n", nomeArquivo);
                        getch();
                        lerArquivo(tam, nomeArquivo, buffer);
                        printf("\n\nPressione uma tecla para iniciar o bubbleSort.\n");
                        getch();
                        bubbleSort(tam, buffer);
                        printf("\nbubbleSort 750k Invertido Concluido!");
                        getch();
                        break;

                     case 3:
                        free(buffer);
                        buffer =  (int *) malloc (750000 * sizeof(int));
                        sprintf(nomeArquivo, "Randomico%06d.txt", tam);
                        printf("\nArmazenando '%s' no Buffer...\n", nomeArquivo);
                        getch();
                        lerArquivo(tam, nomeArquivo, buffer);
                        printf("\n\nPressione uma tecla para iniciar o bubbleSort.\n");
                        getch();
                        bubbleSort(tam, buffer);
                        printf("\nbubbleSort 750k Randomico Concluido!");
                        getch();
                        break;

                     case 0:
                       break;

                     default:
                        printf("\nDigite uma opcao valida!\n");
                        getch();
                  }
                 } while(menu != 0);
                 break;

              case 0:
                 menu = -1;
                 break;

              default:
                 printf("\nDigite uma opcao valida!\n");
                 getch();
           }
          }while(menu != -1);
          menu = NULL;
          break;

       case 3:
          do{
           system("cls || clear");
           printf("----insertSort de arquivos----\n");
           printf("\n1 - Arquivo 1m");
           printf("\n2 - Arquivo 750k");
           printf("\n0 - Voltar\n\n");
           scanf("%d", &menu);

           switch(menu){
              case 1:
                 tam = 1000000;
                 do{
                  system("cls || clear");
                  printf("----insertSort de 1m----\nInforme o tipo do arquivo:\n");
                  printf("\n1 - Ordenado");
                  printf("\n2 - Invertido");
                  printf("\n3 - Randomico");
                  printf("\n0 - Voltar\n\n");
                  scanf("%d", &menu);
                  switch(menu){
                     case 1:
                        free(buffer);
                        buffer =  (int *) malloc (1000000 * sizeof(int));
                        sprintf(nomeArquivo, "Ordenado%07d.txt", tam);
                        printf("\nArmazenando '%s' no Buffer...\n", nomeArquivo);
                        getch();
                        lerArquivo(tam, nomeArquivo, buffer);
                        printf("\n\nPressione uma tecla para iniciar o InsertSort.\n");
                        getch();
                        insertSort(tam, buffer);
                        printf("\n\ninsertSort 1m Ordenado Concluido!\n");
                        getch();
                        break;

                     case 2:
                        free(buffer);
                        buffer =  (int *) malloc (1000000 * sizeof(int));
                        sprintf(nomeArquivo, "Invertido%07d.txt", tam);
                        printf("\nArmazenando '%s' no Buffer...\n", nomeArquivo);
                        getch();
                        lerArquivo(tam, nomeArquivo, buffer);
                        printf("\n\nPressione uma tecla para iniciar o InsertSort.\n");
                        getch();
                        insertSort(tam, buffer);
                        printf("\n\ninsertSort 1m Invertido Concluido!\n");
                        getch();
                        break;

                     case 3:
                        free(buffer);
                        buffer =  (int *) malloc (1000000 * sizeof(int));
                        sprintf(nomeArquivo, "Randomico%07d.txt", tam);
                        printf("\nArmazenando '%s' no Buffer...\n", nomeArquivo);
                        getch();
                        lerArquivo(tam, nomeArquivo, buffer);
                        printf("\n\nPressione uma tecla para iniciar o InsertSort.\n");
                        getch();
                        insertSort(tam, buffer);
                        printf("\n\ninsertSort 1m Randomico Concluido!\n");
                        getch();
                        break;

                     case 0:
                       break;

                     default:
                        printf("\nDigite uma opcao valida!\n");
                        getch();
                  }
                 }while(menu != 0);
                 menu = NULL;
                 break;

              case 2:
                 tam = 750000;
                 do{
                  system("cls || clear");
                  printf("----insertSort de 750k----\nInforme o tipo do arquivo:\n");
                  printf("\n1 - Ordenado");
                  printf("\n2 - Invertido");
                  printf("\n3 - Randomico");
                  printf("\n0 - Voltar\n\n");
                  scanf("%d", &menu);
                  switch(menu){
                     case 1:
                        free(buffer);
                        buffer =  (int *) malloc (750000 * sizeof(int));
                        sprintf(nomeArquivo, "Ordenado%06d.txt", tam);
                        printf("\nArmazenando '%s' no Buffer...\n", nomeArquivo);
                        getch();
                        lerArquivo(tam, nomeArquivo, buffer);
                        printf("\n\nPressione uma tecla para iniciar o InsertSort.\n");
                        getch();
                        insertSort(tam, buffer);
                        printf("\n\ninsertSort 750k Ordenado Concluido!\n");
                        getch();
                        break;

                     case 2:
                        free(buffer);
                        buffer =  (int *) malloc (750000 * sizeof(int));
                        sprintf(nomeArquivo, "Invertido%06d.txt", tam);
                        printf("\nArmazenando '%s' no Buffer...\n", nomeArquivo);
                        getch();
                        lerArquivo(tam, nomeArquivo, buffer);
                        printf("\n\nPressione uma tecla para iniciar o InsertSort.\n");
                        getch();
                        insertSort(tam, buffer);
                        printf("\n\ninsertSort 750k Invertido Concluido!\n");
                        getch();
                        break;

                     case 3:
                        free(buffer);
                        buffer =  (int *) malloc (750000 * sizeof(int));
                        sprintf(nomeArquivo, "Randomico%06d.txt", tam);
                        printf("\nArmazenando '%s' no Buffer...\n", nomeArquivo);
                        getch();
                        lerArquivo(tam, nomeArquivo, buffer);
                        printf("\n\nPressione uma tecla para iniciar o InsertSort.\n");
                        getch();
                        insertSort(tam, buffer);
                        printf("\n\ninsertSort 750k Randomico Concluido!\n");
                        getch();
                        break;

                     case 0:
                       break;

                     default:
                        printf("\nDigite uma opcao valida!\n");
                        getch();
                  }
                 } while(menu != 0);
                 menu = NULL;
                 break;

              case 0:
                 menu = -1;
                 break;

              default:
                 printf("\nDigite uma opcao valida!\n");
                 getch();
           }
          }while(menu != -1);
          menu = NULL;
          break;

       case 4:
          do{
           system("cls || clear");
           printf("----ShelllSort de arquivos----\n");
           printf("\n1 - Arquivo 1m");
           printf("\n2 - Arquivo 750k");
           printf("\n0 - Voltar\n\n");
           scanf("%d", &menu);

           switch(menu){
              case 1:
                 tam = 1000000;
                 do{
                  system("cls || clear");
                  printf("----ShelllSort de 1m----\nInforme o tipo do arquivo:\n");
                  printf("\n1 - Ordenado");
                  printf("\n2 - Invertido");
                  printf("\n3 - Randomico");
                  printf("\n0 - Voltar\n\n");
                  scanf("%d", &menu);
                  switch(menu){
                     case 1:
                        free(buffer);
                        buffer =  (int *) malloc (1000000 * sizeof(int));
                        sprintf(nomeArquivo, "Ordenado%07d.txt", tam);
                        printf("\nArmazenando '%s' no Buffer...\n", nomeArquivo);
                        getch();
                        lerArquivo(tam, nomeArquivo, buffer);
                        printf("\n\nPressione uma tecla para iniciar o ShelllSort.\n");
                        getch();
                        shellSort(tam, buffer);
                        printf("\nShelllSort 1m Ordenado Concluido!");
                        getch();
                        break;

                     case 2:
                        free(buffer);
                        buffer =  (int *) malloc (1000000 * sizeof(int));
                        sprintf(nomeArquivo, "Invertido%07d.txt", tam);
                        printf("\nArmazenando '%s' no Buffer...\n", nomeArquivo);
                        getch();
                        lerArquivo(tam, nomeArquivo, buffer);
                        printf("\n\nPressione uma tecla para iniciar o ShelllSort.\n");
                        getch();
                        shellSort(tam, buffer);
                        printf("\nShelllSort 1m Invertido Concluido!");
                        getch();
                        break;

                     case 3:
                        free(buffer);
                        buffer =  (int *) malloc (1000000 * sizeof(int));
                        sprintf(nomeArquivo, "Randomico%07d.txt", tam);
                        printf("\nArmazenando '%s' no Buffer...\n", nomeArquivo);
                        getch();
                        lerArquivo(tam, nomeArquivo, buffer);
                        printf("\n\nPressione uma tecla para iniciar o ShelllSort.\n");
                        getch();
                        shellSort(tam, buffer);
                        printf("\nShelllSort 1m Randomico Concluido!");
                        getch();
                        break;

                     case 0:
                       break;

                     default:
                        printf("\nDigite uma opcao valida!\n");
                        getch();
                  }
                 } while(menu != 0);
                 break;

              case 2:
                 tam = 750000;
                 do{
                  system("cls || clear");
                  printf("----ShelllSort de 750k----\nInforme o tipo do arquivo:\n");
                  printf("\n1 - Ordenado");
                  printf("\n2 - Invertido");
                  printf("\n3 - Randomico");
                  printf("\n0 - Voltar\n\n");
                  scanf("%d", &menu);
                  switch(menu){
                     case 1:
                        free(buffer);
                        buffer =  (int *) malloc (750000 * sizeof(int));
                        sprintf(nomeArquivo, "Ordenado%06d.txt", tam);
                        printf("\nArmazenando '%s' no Buffer...\n", nomeArquivo);
                        getch();
                        lerArquivo(tam, nomeArquivo, buffer);
                        printf("\n\nPressione uma tecla para iniciar o ShelllSort.\n");
                        getch();
                        shellSort(tam, buffer);
                        printf("\nShelllSort 750k Ordenado Concluido!");
                        getch();
                        break;

                     case 2:
                        free(buffer);
                        buffer =  (int *) malloc (750000 * sizeof(int));
                        sprintf(nomeArquivo, "Invertido%06d.txt", tam);
                        printf("\nArmazenando '%s' no Buffer...\n", nomeArquivo);
                        getch();
                        lerArquivo(tam, nomeArquivo, buffer);
                        printf("\n\nPressione uma tecla para iniciar o ShelllSort.\n");
                        getch();
                        shellSort(tam, buffer);
                        printf("\nShelllSort 750k Invertido Concluido!");
                        getch();
                        break;

                     case 3:
                        free(buffer);
                        buffer =  (int *) malloc (750000 * sizeof(int));
                        sprintf(nomeArquivo, "Randomico%06d.txt", tam);
                        printf("\nArmazenando '%s' no Buffer...\n", nomeArquivo);
                        getch();
                        lerArquivo(tam, nomeArquivo, buffer);
                        printf("\n\nPressione uma tecla para iniciar o ShelllSort.\n");
                        getch();
                        shellSort(tam, buffer);
                        printf("\nShelllSort 750k Randomico Concluido!");
                        getch();
                        break;

                     case 0:
                       break;

                     default:
                        printf("\nDigite uma opcao valida!\n");
                        getch();
                  }
                 } while(menu != 0);
                 break;

              case 0:
                 menu = -1;
                 break;

              default:
                 printf("\nDigite uma opcao valida!\n");
                 getch();
           }
          }while(menu != -1);
          menu = NULL;
          break;

       case 5:
          do{
           system("cls || clear");
           printf("----SelectionSort de arquivos----\n");
           printf("\n1 - Arquivo 1m");
           printf("\n2 - Arquivo 750k");
           printf("\n0 - Voltar\n\n");
           scanf("%d", &menu);

           switch(menu){
              case 1:
                 tam = 1000000;
                 do{
                  system("cls || clear");
                  printf("----SelectionSort de 1m----\nInforme o tipo do arquivo:\n");
                  printf("\n1 - Ordenado");
                  printf("\n2 - Invertido");
                  printf("\n3 - Randomico");
                  printf("\n0 - Voltar\n\n");
                  scanf("%d", &menu);
                  switch(menu){
                     case 1:
                        free(buffer);
                        buffer =  (int *) malloc (1000000 * sizeof(int));
                        sprintf(nomeArquivo, "Ordenado%07d.txt", tam);
                        printf("\nArmazenando '%s' no Buffer...\n", nomeArquivo);
                        getch();
                        lerArquivo(tam, nomeArquivo, buffer);
                        printf("\n\nPressione uma tecla para iniciar o SelectionSort.\n");
                        getch();
                        selectionSort(tam, buffer);
                        printf("\nSelectionSort 1m Ordenado Concluido!");
                        getch();
                        break;

                     case 2:
                        free(buffer);
                        buffer =  (int *) malloc (1000000 * sizeof(int));
                        sprintf(nomeArquivo, "Invertido%07d.txt", tam);
                        printf("\nArmazenando '%s' no Buffer...\n", nomeArquivo);
                        getch();
                        lerArquivo(tam, nomeArquivo, buffer);
                        printf("\n\nPressione uma tecla para iniciar o SelectionSort.\n");
                        getch();
                        selectionSort(tam, buffer);
                        printf("\nSelectionSort 1m Invertido Concluido!");
                        getch();
                        break;

                     case 3:
                        free(buffer);
                        buffer =  (int *) malloc (1000000 * sizeof(int));
                        sprintf(nomeArquivo, "Randomico%07d.txt", tam);
                        printf("\nArmazenando '%s' no Buffer...\n", nomeArquivo);
                        getch();
                        lerArquivo(tam, nomeArquivo, buffer);
                        printf("\n\nPressione uma tecla para iniciar o SelectionSort.\n");
                        getch();
                        selectionSort(tam, buffer);
                        printf("\nSelectionSort 1m Randomico Concluido!");
                        getch();
                        break;

                     case 0:
                       break;

                     default:
                        printf("\nDigite uma opcao valida!\n");
                        getch();
                  }
                 } while(menu != 0);
                 break;

              case 2:
                 tam = 750000;
                 do{
                  system("cls || clear");
                  printf("----SelectionSort de 750k----\nInforme o tipo do arquivo:\n");
                  printf("\n1 - Ordenado");
                  printf("\n2 - Invertido");
                  printf("\n3 - Randomico");
                  printf("\n0 - Voltar\n\n");
                  scanf("%d", &menu);
                  switch(menu){
                     case 1:
                        free(buffer);
                        buffer =  (int *) malloc (750000 * sizeof(int));
                        sprintf(nomeArquivo, "Ordenado%06d.txt", tam);
                        printf("\nArmazenando '%s' no Buffer...\n", nomeArquivo);
                        getch();
                        lerArquivo(tam, nomeArquivo, buffer);
                        printf("\n\nPressione uma tecla para iniciar o SelectionSort.\n");
                        getch();
                        selectionSort(tam, buffer);
                        printf("\nSelectionSort 750k Ordenado Concluido!");
                        getch();
                        break;

                     case 2:
                        free(buffer);
                        buffer =  (int *) malloc (750000 * sizeof(int));
                        sprintf(nomeArquivo, "Invertido%06d.txt", tam);
                        printf("\nArmazenando '%s' no Buffer...\n", nomeArquivo);
                        getch();
                        lerArquivo(tam, nomeArquivo, buffer);
                        printf("\n\nPressione uma tecla para iniciar o SelectionSort.\n");
                        getch();
                        selectionSort(tam, buffer);
                        printf("\nSelectionSort 750k Invertido Concluido!");
                        getch();
                        break;

                     case 3:
                        free(buffer);
                        buffer =  (int *) malloc (750000 * sizeof(int));
                        sprintf(nomeArquivo, "Randomico%06d.txt", tam);
                        printf("\nArmazenando '%s' no Buffer...\n", nomeArquivo);
                        getch();
                        lerArquivo(tam, nomeArquivo, buffer);
                        printf("\n\nPressione uma tecla para iniciar o SelectionSort.\n");
                        getch();
                        selectionSort(tam, buffer);
                        printf("\nSelectionSort 750k Randomico Concluido!");
                        getch();
                        break;

                     case 0:
                       break;

                     default:
                        printf("\nDigite uma opcao valida!\n");
                        getch();
                  }
                 } while(menu != 0);
                 break;

              case 0:
                 menu = -1;
                 break;

              default:
                 printf("\nDigite uma opcao valida!\n");
                 getch();
           }
          }while(menu != -1);
          menu = NULL;
          break;

       case 6:
          do{
           system("cls || clear");
           printf("----QuickSort de arquivos----\n");
           printf("\n1 - Arquivo 1m");
           printf("\n2 - Arquivo 750k");
           printf("\n0 - Voltar\n\n");
           scanf("%d", &menu);

           switch(menu){
              case 1:
                 tam = 1000000;
                 do{
                  system("cls || clear");
                  printf("----QuickSort de 1m----\nInforme o tipo do arquivo:\n");
                  printf("\n1 - Ordenado");
                  printf("\n2 - Invertido");
                  printf("\n3 - Randomico");
                  printf("\n0 - Voltar\n\n");
                  scanf("%d", &menu);
                  switch(menu){
                     case 1:
                        free(buffer);
                        buffer =  (int *) malloc (1000000 * sizeof(int));
                        sprintf(nomeArquivo, "Ordenado%07d.txt", tam);
                        printf("\nArmazenando '%s' no Buffer...\n", nomeArquivo);
                        getch();
                        lerArquivo(tam, nomeArquivo, buffer);
                        printf("\n\nPressione uma tecla para iniciar o QuickSort.\n");
                        getch();
                        quickSortRecursivo(0,tam-1, buffer);
                        printf("\nQuickSort 1m Ordenado Concluido!");
                        getch();
                        break;

                     case 2:
                        free(buffer);
                        buffer =  (int *) malloc (1000000 * sizeof(int));
                        sprintf(nomeArquivo, "Invertido%07d.txt", tam);
                        printf("\nArmazenando '%s' no Buffer...\n", nomeArquivo);
                        getch();
                        lerArquivo(tam, nomeArquivo, buffer);
                        printf("\n\nPressione uma tecla para iniciar o QuickSort.\n");
                        getch();
                        quickSortRecursivo(0,tam-1, buffer);
                        printf("\nQuickSort 1m Invertido Concluido!");
                        getch();
                        break;

                     case 3:
                        free(buffer);
                        buffer =  (int *) malloc (1000000 * sizeof(int));
                        sprintf(nomeArquivo, "Randomico%07d.txt", tam);
                        printf("\nArmazenando '%s' no Buffer...\n", nomeArquivo);
                        getch();
                        lerArquivo(tam, nomeArquivo, buffer);
                        printf("\n\nPressione uma tecla para iniciar o QuickSort.\n");
                        getch();
                        quickSortRecursivo(0,tam-1, buffer);
                        printf("\nQuickSort 1m Randomico Concluido!");
                        getch();
                        break;

                     case 0:
                       break;

                     default:
                        printf("\nDigite uma opcao valida!\n");
                        getch();
                  }
                 } while(menu != 0);
                 break;

              case 2:
                 tam = 750000;
                 do{
                  system("cls || clear");
                  printf("----QuickSort de 750k----\nInforme o tipo do arquivo:\n");
                  printf("\n1 - Ordenado");
                  printf("\n2 - Invertido");
                  printf("\n3 - Randomico");
                  printf("\n0 - Voltar\n\n");
                  scanf("%d", &menu);
                  switch(menu){
                     case 1:
                        free(buffer);
                        buffer =  (int *) malloc (750000 * sizeof(int));
                        sprintf(nomeArquivo, "Ordenado%06d.txt", tam);
                        printf("\nArmazenando '%s' no Buffer...\n", nomeArquivo);
                        getch();
                        lerArquivo(tam, nomeArquivo, buffer);
                        printf("\n\nPressione uma tecla para iniciar o QuickSort.\n");
                        getch();
                        quickSortRecursivo(0,tam-1, buffer);
                        printf("\nQuickSort 750k Ordenado Concluido!");
                        getch();
                        break;

                     case 2:
                        free(buffer);
                        buffer =  (int *) malloc (750000 * sizeof(int));
                        sprintf(nomeArquivo, "Invertido%06d.txt", tam);
                        printf("\nArmazenando '%s' no Buffer...\n", nomeArquivo);
                        getch();
                        lerArquivo(tam, nomeArquivo, buffer);
                        printf("\n\nPressione uma tecla para iniciar o QuickSort.\n");
                        getch();
                        quickSortRecursivo(0,tam-1, buffer);
                        printf("\nQuickSort 750k Invertido Concluido!");
                        getch();
                        break;

                     case 3:
                        free(buffer);
                        buffer =  (int *) malloc (750000 * sizeof(int));
                        sprintf(nomeArquivo, "Randomico%06d.txt", tam);
                        printf("\nArmazenando '%s' no Buffer...\n", nomeArquivo);
                        getch();
                        lerArquivo(tam, nomeArquivo, buffer);
                        printf("\n\nPressione uma tecla para iniciar o QuickSort.\n");
                        getch();
                        quickSortRecursivo(0,tam-1, buffer);
                        printf("\nQuickSort 750k Randomico Concluido!");
                        getch();
                        break;

                     case 0:
                       break;

                     default:
                        printf("\nDigite uma opcao valida!\n");
                        getch();
                  }
                 } while(menu != 0);
                 break;

              case 0:
                 menu = -1;
                 break;

              default:
                 printf("\nDigite uma opcao valida!\n");
                 getch();
           }
          }while(menu != -1);
          menu = NULL;
          break;

       case 7:
          do{
           system("cls || clear");
           printf("----MergeSort de arquivos----\n");
           printf("\n1 - Arquivo 1m");
           printf("\n2 - Arquivo 750k");
           printf("\n0 - Voltar\n\n");
           scanf("%d", &menu);

           switch(menu){
              case 1:
                 tam = 1000000;
                 do{
                  system("cls || clear");
                  printf("----MergeSort de 1m----\nInforme o tipo do arquivo:\n");
                  printf("\n1 - Ordenado");
                  printf("\n2 - Invertido");
                  printf("\n3 - Randomico");
                  printf("\n0 - Voltar\n\n");
                  scanf("%d", &menu);
                  switch(menu){
                     case 1:
                        free(buffer);
                        buffer =  (int *) malloc (1000000 * sizeof(int));
                        sprintf(nomeArquivo, "Ordenado%07d.txt", tam);
                        printf("\nArmazenando '%s' no Buffer...\n", nomeArquivo);
                        getch();
                        lerArquivo(tam, nomeArquivo, buffer);
                        printf("\n\nPressione uma tecla para iniciar o MergeSort.\n");
                        getch();
                        mergeSort(buffer, tam);
                        printf("\nMergeSort 1m Ordenado Concluido!");
                        getch();
                        break;

                     case 2:
                        free(buffer);
                        buffer =  (int *) malloc (1000000 * sizeof(int));
                        sprintf(nomeArquivo, "Invertido%07d.txt", tam);
                        printf("\nArmazenando '%s' no Buffer...\n", nomeArquivo);
                        getch();
                        lerArquivo(tam, nomeArquivo, buffer);
                        printf("\n\nPressione uma tecla para iniciar o MergeSort.\n");
                        getch();
                        mergeSort(buffer, tam);
                        printf("\nMergeSort 1m Invertido Concluido!");
                        getch();
                        break;

                     case 3:
                        free(buffer);
                        buffer =  (int *) malloc (1000000 * sizeof(int));
                        sprintf(nomeArquivo, "Randomico%07d.txt", tam);
                        printf("\nArmazenando '%s' no Buffer...\n", nomeArquivo);
                        getch();
                        lerArquivo(tam, nomeArquivo, buffer);
                        printf("\n\nPressione uma tecla para iniciar o MergeSort.\n");
                        getch();
                        mergeSort(buffer, tam);
                        printf("\nMergeSort 1m Randomico Concluido!");
                        getch();
                        break;

                     case 0:
                       break;

                     default:
                        printf("\nDigite uma opcao valida!\n");
                        getch();
                  }
                 } while(menu != 0);
                 break;

              case 2:
                 tam = 750000;
                 do{
                  system("cls || clear");
                  printf("----MergeSort de 750k----\nInforme o tipo do arquivo:\n");
                  printf("\n1 - Ordenado");
                  printf("\n2 - Invertido");
                  printf("\n3 - Randomico");
                  printf("\n0 - Voltar\n\n");
                  scanf("%d", &menu);
                  switch(menu){
                     case 1:
                        free(buffer);
                        buffer =  (int *) malloc (750000 * sizeof(int));
                        sprintf(nomeArquivo, "Ordenado%06d.txt", tam);
                        printf("\nArmazenando '%s' no Buffer...\n", nomeArquivo);
                        getch();
                        lerArquivo(tam, nomeArquivo, buffer);
                        printf("\n\nPressione uma tecla para iniciar o MergeSort.\n");
                        getch();
                        mergeSort(buffer, tam);
                        printf("\nMergeSort 750k Ordenado Concluido!");
                        getch();
                        break;

                     case 2:
                        free(buffer);
                        buffer =  (int *) malloc (750000 * sizeof(int));
                        sprintf(nomeArquivo, "Invertido%06d.txt", tam);
                        printf("\nArmazenando '%s' no Buffer...\n", nomeArquivo);
                        getch();
                        lerArquivo(tam, nomeArquivo, buffer);
                        printf("\n\nPressione uma tecla para iniciar o MergeSort.\n");
                        getch();
                        mergeSort(buffer, tam);
                        printf("\nMergeSort 750k Invertido Concluido!");
                        getch();
                        break;

                     case 3:
                        free(buffer);
                        buffer =  (int *) malloc (750000 * sizeof(int));
                        sprintf(nomeArquivo, "Randomico%06d.txt", tam);
                        printf("\nArmazenando '%s' no Buffer...\n", nomeArquivo);
                        getch();
                        lerArquivo(tam, nomeArquivo, buffer);
                        printf("\n\nPressione uma tecla para iniciar o MergeSort.\n");
                        getch();
                        mergeSort(buffer, tam);
                        printf("\nMergeSort 750k Randomico Concluido!");
                        getch();
                        break;

                     case 0:
                       break;

                     default:
                        printf("\nDigite uma opcao valida!\n");
                        getch();
                  }
                 } while(menu != 0);
                 break;

              case 0:
                 menu = -1;
                 break;

              default:
                 printf("\nDigite uma opcao valida!\n");
                 getch();
           }
          }while(menu != -1);
          menu = NULL;
          break;
       case 9:
          system("cls || clear");
          printf("----teste----\n");
          tam = 10;
          free(buffer);
          buffer =  (int *) malloc (10 * sizeof(int));
          sprintf(nomeArquivo, "teste.txt");
          printf("\nArmazenando '%s' no Buffer...\n", nomeArquivo);
          getch();
          lerArquivo(tam, nomeArquivo, buffer);
          printf("\n\nPressione uma tecla para iniciar o bubbleSort.\n");
          getch();
          mergeSort(buffer, tam);
          printf("\n\nConcluido!\n");
          getch();
          break;
       case 0:
          menu = -2;
          break;
       default:
          printf("\nDigite uma opcao valida!\n");
          getch();
    }
   }while(menu != -2);
}
