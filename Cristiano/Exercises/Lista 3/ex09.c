#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");
    int anos, meses, dias, idade;

    printf("Insira sua idade expressa em anos, meses e dias"
    "\nAnos: ");
    scanf("%d", &anos);
    printf("\nMeses: ");
    scanf("%d", &meses);
    printf("\nDias: ");
    scanf("%d", &dias);

    idade = (anos*365) + (meses*30) + dias;
    printf("\nSua idade em dias é igual a: %d", idade);

}