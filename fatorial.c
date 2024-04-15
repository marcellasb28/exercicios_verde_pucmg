#include<stdio.h>

int main(){

    int numero;
    int fatorial = 1;

    scanf("%d", &numero);

    for (int i=1; i <= numero; i++){
        fatorial = fatorial * i;
    }

    printf("%d", fatorial);
}