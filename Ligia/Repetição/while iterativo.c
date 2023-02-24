#include <stdio.h>
#include <locale.h>

void main(){
    
    setlocale(LC_ALL,"Portuguese");
    int saida;
    saida = 1;
    while (saida <= 10){
        printf("%d \n", saida);
        saida++;
    }
}