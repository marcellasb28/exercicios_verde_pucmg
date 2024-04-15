#include <stdio.h>

int main() {
    int numero1, numero2;

    scanf("%d", &numero1);
    scanf("%d", &numero2);



    for (int i = numero1 + 1; i < numero2; i++) {
        int primo = 1; // Assume que o número é primo inicialmente

        for (int d = 2; d * d <= i; d++) {
            if (i % d == 0) {
                primo = 0; // Não é primo
                break;
                }
        }
        if (primo) {
            printf("%d ", i);
        }
    }
    

}
