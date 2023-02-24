// (FOR) Escreva um algoritmo que gere o números de 1000 a 1999 e escreva aqueles que dividido por 11 dão resto igual a 5.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");

    for (int i = 1000; i < 2000; i++){
        if (i % 11 == 5)
            printf("%d\n", i);
    }
}
