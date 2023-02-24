#include <stdio.h>
#include <locale.h>

void main(){

    float n1, n2, n3, n4, media;
    setlocale(LC_ALL,"");

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a primeira nota: ");
    scanf("%f", &n2);
    printf("Digite a primeira nota: ");
    scanf("%f", &n3);
    printf("Digite a primeira nota: ");
    scanf("%f", &n4);
    media = (n1 + n2 + n3 + n4) / 4;
    if (media >= 6){
        printf("A sua média é %.2f e você está aprovado.", media);
    } else if (media < 6 && media >= 3) {
        printf("A sua média é %.2f e você está de recuperação", media);
    } else {
        printf("A sua média é %.2f e você está reprovado.", media);
    }

}
