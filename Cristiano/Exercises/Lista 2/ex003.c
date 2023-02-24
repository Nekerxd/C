// (DO WHILE) Escrever um algoritmo que leia uma quantidade desconhecida de números e conte quantos deles estão nos seguintes intervalos: [0,25], [26,50], [51,75] e [76,100]. A entrada de dados deve terminar quando for lido um número negativo.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int num, range1, range2, range3, range4, outrange;
    outrange = range1 = range2 = range3 = range4 = 0;

    do
    {
        printf("\nDigite um número: ");
        scanf("%d", &num);
        
        if (num > -1){
            if (num < 26) range1++;
            else if (num < 51) range2++;
            else if (num < 76) range3++;
            else if (num < 101) range4++;
            else outrange++;

            if (range1 > 0)
                printf("\n%d números estão dentro do intervalo [0,25]", range1);
            if (range2 > 0)
                printf("\n%d números estão dentro do intervalo [26,50]", range2);
            if (range3 > 0)
                printf("\n%d números estão dentro do intervalo [51,75]", range3);
            if (range4 > 0)
                printf("\n%d números estão dentro do intervalo [76,100]", range4);
            if (outrange > 0)
                printf("\n%d números estão fora dos intervalos", outrange);
        }
    } while (num >-1);
}