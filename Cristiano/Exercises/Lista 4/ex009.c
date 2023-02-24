// Escrever um algoritmo que gera e escreve os números ímpares entre 100 e 200.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int i;

    for (i = 100; i < 200; i++){
        if (i % 2 != 0)
            printf("[%d]\n", i);
    }
}