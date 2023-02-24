// Write a C program to compute the sum of the two given integers. If the sum is in the range 10..20 inclusive return 30.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int num1, num2;
    printf("Insira dois números inteiros: ");
    scanf("%d %d", &num1, &num2);

    printf("%d", check(num1, num2));
}

int check(x, y){
    if ((x + y) > 9 && (x + y) < 21)
        return 30;
    return 0;
}