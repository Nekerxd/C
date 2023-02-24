#include <stdio.h>
#include <locale.h>

void main(){

    char estado;
    setlocale(LC_ALL,"");

    printf("Estado civil \n S - Solteiro(a) \n C - Casado(a) \n D - Divorciado(a) \n V - Viúvo(a) \n Escolha uma opção (s, c, d ou v): ");
    scanf("%c", &estado);
    if (estado == 's' || estado == 'S') {
        printf("Seu estado civil é solteiro.");
    } else if (estado == 'c' || estado == 'C') {
        printf("Seu estado civil é casado.");
    } else if (estado == 'd' || estado == 'D') {
        printf("Seu estado civil é divorciado.");
    } else if (estado == 'v' || estado == 'V') {
        printf("Seu estado civil é viúvo.");
    } else {
        printf("Opção inválida.");
    }
}
