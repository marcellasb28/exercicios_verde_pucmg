/*Faça um algoritmo que leia um vetor de N posições de números inteiros
e imprima o maior elemento do vetor e sua posição no vetor. 
Caso exista mais de um elemento cujo valor seja o maior dentre todos, imprima a posição do último elemento encontrado. 
Não é lido pelo algoritmo.


Entrada: A entrada é composta por duas linhas. 
A primeira linha contém um inteiro que representa o tamanho do vetor (N). 
A segunda linha contém N inteiros que representam o conteúdo do array.
Saída: Uma única linha contendo o maior elemento e sua respectiva posição.*/

#include<stdio.h>

int main(){
    //entrada
    int n;
    int maior = 0;
    int maiorposicao = 0;

   
    scanf("%d", &n);

    int vetor[n];

    for (int i = 0; i < n; i++){
        scanf("%d", &vetor[i]);
    }

    //processamento:

    for (int i = 0; i < n; i++){
        if (vetor[i] >= maior) {
            maior = vetor[i];
            maiorposicao = i;
        }
    } 

    printf(" %d %d", maior, maiorposicao);  

    return 0;
} 
