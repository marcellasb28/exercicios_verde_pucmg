#include<stdio.h>

int main(){

    float n = 0;
    int contnum =0, cont5 = 0;

    while (n != -1){
        scanf("%f", &n);
        if( n == 5){
            cont5 ++;
        } 
        contnum++;
        if( n == -1){
            contnum = contnum - 1;
        } 
    }
    
    printf("%d %d", contnum, cont5);
}