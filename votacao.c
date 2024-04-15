/*Em uma eleição presidencial existem quatro candidatos. Os votos são informados por meio de código. Os códigos utilizados são: 1 – Candidato 1 2 – Candidato 2 3 – Candidato 3 4 – Candidato 4 5 – Voto nulo 6 – Voto branco

Faça um programa que calcule e mostre: • o total de votos para cada candidato; • o total de votos nulos; • uma porcentagem de votos em branco sobre o total de votos. Para finalizar o conjunto de votos digitalizados, deve-se informar o código zero.

Entrada: N linhas contendo um número inteiro que representa o voto de cada cidadão, sendo que o conteúdo da última linha é 0 (zero). Atenção, pois podem existir números diferentes dos códigos (1,2,3,4,5,6) utilizados.

Saida: Três linhas, sendo que a primeira linha contém os votos dos candidatos 1,2,3 e 4 respectivamente. A segunda linha contém o total de votos nulos. A terceira linha contém o percentual de votos brancos em relação ao total de votos.*/
#include<stdio.h>
int main(){
    int voto = 1;
    int cand1 = 0;
    int cand2 = 0; 
    int cand3 = 0; 
    int cand4 = 0; 
    int nulo5 = 0;
    int branco6 = 0;
    int contvot = 0;
    float percent = 0;

     while (1) { // Loop infinito, será interrompido quando voto for igual a 0

        scanf("%d", &voto);

         if (voto == 0) // Condição de saída do loop
            break;

        switch (voto){
            case 1:
                cand1 ++;
                contvot ++;
                break;
            case 2:
                cand2 ++;
                contvot ++;
                break;
            case 3:
                cand3 ++;
                contvot ++;
                break;
            case 4:
                cand4 ++;
                contvot ++;
                break;
            case 5:
                nulo5 ++;
                contvot ++;
                break;
            case 6:
                branco6 ++;
                contvot ++;
                break;
        }
    }

    percent = ((float)branco6/contvot)* 100;

    printf(" %d\t %d\t %d\t %d\n", cand1, cand2, cand3, cand4);
    printf("%d\n", nulo5);
    printf("%.2f\n", percent);
}