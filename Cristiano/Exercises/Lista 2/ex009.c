// Escrever um algoritmo que gera e escreve os números ímpares entre 100 e 200.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");

    for (int i = 100; i < 201; i++){
        if (i % 2 == 1)
            printf("[%d]\n", i);
    }
}