/*#include<stdio.h>

int main(){

    int n;
    float num = 1, den = 1;
    float soma = 0;

  
    scanf("%d", &n);

    for ( int i = 0; i < n; i++){
        num += 2;
        den +=1;
        soma += (float)num/den;
    }
    printf("%.2f", soma);
}*/



#include <stdio.h>

int main() {
    int n;
    float num = 1, den = 1;
    float soma = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        soma += num / den;
        num += 2; // Incrementa o numerador em 2 a cada iteração
        den += 1; // Incrementa o denominador em 1 a cada iteração
    }

    printf("%.2f", soma);
    return 0;
}