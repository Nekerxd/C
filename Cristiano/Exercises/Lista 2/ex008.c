// Escrever um algoritmo que calcule e mostre a média aritmética dos números lidos entre 13 e 73.

#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

int main(){
    setlocale(LC_ALL, "");
    int contador = 0, num, key = 1, totnum = 0;
    float media;

    while (key != 0){

        printf("\nInsira um número: ");
        scanf("%d", &num);
        
        if (num > 12 && num < 74){
            totnum += num;
            contador++;
        } else
            key = 0;
    }   
    if (contador > 0)
        printf("\nA média aritmética dos números lidos entre 13 e 73 é %.1f", (float)(totnum/contador));
    else
        printf("O número inserido deve ser entre 13 e 73");
}