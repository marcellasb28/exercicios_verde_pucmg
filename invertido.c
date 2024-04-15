#include<stdio.h>

int main(){
    int numero;
    int digito = 0, novonum = 0;

    
    scanf("%d", &numero);

    while (numero > 0){
        digito = numero % 10;

        if (digito ==  0){
            digito = 1;
        }

        numero = numero/10;
        novonum = novonum * 10 + digito;
        
    }
     printf("%d\t", novonum);
}