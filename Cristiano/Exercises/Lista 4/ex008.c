//  Escrever um algoritmo que calcule e mostre a média aritmética dos números lidos entre 13 e 73.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int num, limite, i, soma = 0, x = 0;

    printf("Quantos números deseja inserir: ");
    scanf("%d", &limite);

    for (i = 0; i < limite; i++){
        printf("Insira o %dº número: ", i+1);
        scanf("%d", &num);

        if (num < 13 && num > 73){
            soma += num;
            x++;
        }
    }

    printf("A média aritmética dos %d números lidos entre 13 e 73 é: %d", x, (float)soma / x);
}