#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    float temp;

    printf("Insira a temperatura: ");
    scanf("%f", &temp);

    if (temp < 20)
        printf("\nClima Frio!");
    else if (temp <= 30)
        printf("\nClima Agradável!");
    else
        printf("\nClima Quente!");
}