#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");
    int num = 0, inter1 = 0, inter2 = 0, inter3 = 0, inter4 = 0, forainter = 0;

    do
    {
        printf("\nDigite um número: ");
        scanf("%d", &num);

        if (num >= 0 && num < 26)
            inter1++;
        else if (num < 51)
            inter2++;
        else if (num < 76)
            inter3++;
        else if (num < 101)
            inter4++;
        else
            forainter++;

        if (inter1 > 0)
            printf("\n%d números estão dentro do intervalo [0,25]", inter1);
        if (inter2 > 0)
            printf("\n%d números estão dentro do intervalo [26,50]", inter2);
        if (inter3 > 0)
            printf("\n%d números estão dentro do intervalo [51,75]", inter3);
        if (inter4 > 0)
            printf("\n%d números estão dentro do intervalo [76,100]", inter4);
        if (forainter > 0)
            printf("\n%d números estão fora dos intervalos", forainter);
    } while (num > 0);       
}
