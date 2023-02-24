#include <stdio.h>
#include <locale.h>

void main(){

    float sal, tempo, idade;
    setlocale(LC_ALL, "");

    printf("Informe seu salário: ");
    scanf("%f", &sal);

    printf("Digite sua idade: ");
    scanf("%f", &idade);
    
    printf("Informe o tempo de serviço: ");
    scanf("%f", &tempo);
    idade >= 30 && tempo >= 3 && sal >=4000 ? printf("Receberá reajuste") : printf("Não receberá reajuste");
}
