#include<stdio.h>

/*int main(){
    int numero;

   
    scanf("%d", &numero);

    for ( int i = 2; i < numero; i++){
        if ((numero % i == 0) && ( i != numero)){
            printf("Nao primo");
            break;
        } else {
            printf("Primo");
            break;
        }
    }
}*/

int main (){
    int num;
    int primo = 1;

    scanf("%d", &num);

    for (int i = 2; i < num+2 ; i++){
        if((num % i) == 0) {
            primo = 0;
        } 
    }

    if(primo==1) {
        printf("Primo");
    } 
    else{
        printf("Nao primo");
    }
}
