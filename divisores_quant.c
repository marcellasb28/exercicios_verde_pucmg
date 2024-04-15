#include<stdio.h>

int main(){

    int numero;
    int divisores = 0;
    int naodiv = 0;

    scanf("%d", &numero);

    for (int i = 1; i <= numero; i++){
        if ((numero % i) == 0){
            divisores ++;
        } else {
            naodiv ++;
        }
    }

    printf("%d", divisores);
}