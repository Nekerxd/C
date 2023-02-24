// Escrever um algoritmo que lê 10 valores, um de cada vez, e conta quantos deles estão no intervalo [10,20] e quantos deles estão fora do intervalo, escrevendo estas informações.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int num, range = 0, outrange = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um número: ");
        scanf("%d", &num);

        if (num > 9 && num < 21) range++;
        else outrange++;

        if (range > 0)
            printf("\n%d números estão no intervalo [10,20]", range);
        printf("\n%d números estão fora do intervalo", outrange);
    }
}
