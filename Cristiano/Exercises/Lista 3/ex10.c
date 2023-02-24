#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");
    int idade, anos, meses, dias;

    printf("Sua idade em dias: ");
    scanf("%d", &idade);
    
    anos = idade / 365;
    meses = (idade % 365) / 30;
    dias = (idade % 365) % 30;

    printf("Sua idade é igual a %d , %d meses e %d dias.", anos, meses, dias);
}
