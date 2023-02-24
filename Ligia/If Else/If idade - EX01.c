#include <stdio.h>
#include <locale.h>

void main(){

    int idade;
    setlocale(LC_ALL,"");

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    idade >= 18 ? printf("Você tem %d e é maior de idade.", idade) : printf("Você tem %d e é menor de idade.", idade);
}
