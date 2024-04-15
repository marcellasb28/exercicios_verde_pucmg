#include<stdio.h>

int main(){
    int venceu = 0;
    int perdeu = 0;
    char jogo;

    for ( int i = 0; i < 6; i++){
        scanf(" %c", &jogo);

        if ((jogo == 'v') || (jogo == 'V')){
            venceu ++;
        } else if ((jogo == 'p') || (jogo == 'P')){
            perdeu ++;
        }
    }

    if ((venceu == 1) || (venceu == 2) ){
        printf("3");
    } else if ((venceu == 3) || (venceu == 4) ){
        printf("2");
    } else if ((venceu == 5) || (venceu == 6) ){
        printf("1");
    } else {
        printf("-1");
    }

}