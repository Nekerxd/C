// Escrever um algoritmo que lê 10 valores, um de cada vez, e conta quantos deles estão no intervalo [10,20] e quantos deles estão fora do intervalo, escrevendo estas informações.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int i, num, cont = 0;

    for (i = 0; i < 10; i++){
        printf("Insira um número: ");
        scanf("%d", &num);
        
        if (num > 9 && num < 21)
        cont++;
    }

    printf("\n%d números estão no intervalo [10,20]", cont);
}