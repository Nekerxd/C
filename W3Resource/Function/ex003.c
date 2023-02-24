// Write a program in C to swap two numbers using function.

#include <stdio.h>
#include <locale.h>

void check(int *x, int *y);

int main(){
    setlocale(LC_ALL,"");
    int num1, num2;
    printf("Insira dois números inteiros: ");
    scanf("%d %d", &num1, &num2);

    printf("\nAntes de trocar: n1 = %d, n2 = %d", num1, num2);
    check(&num1, &num2);
    printf("\nDepois de trocar: n1 = %d, n2 = %d", num1, num2);
}

void check(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}