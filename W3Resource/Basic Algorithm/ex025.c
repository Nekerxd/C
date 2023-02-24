// Write a C program to check whether two or more non-negative given integers have the same rightmost digit.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int num1, num2;
    printf("Insira dois números inteiros: ");
    scanf("%d %d", &num1, &num2);

    printf("%d", check(num1, num2));
}

int check(x, y){
    return x % 10 == y % 10;
}