// Write a C program to compute the sum of the two given integers. If one of the given integer value is in the range 10..20 inclusive return 18.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int num1, num2;

    printf("Insira dois números: ");
    scanf("%d %d", &num1, &num2);

    printf("%d", soma(num1, num2));
}

int soma(int n1, int n2){
    return (n1 < 21 && n1 > 9) || (n2 < 21 && n2 > 9) ? 18 : n1 + n2;
}