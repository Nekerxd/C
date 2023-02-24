// Write a C program to check whether a given non-negative number is a multiple of 3 or 7, but not both.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int num1;
    printf("Insira dois números inteiros: ");
    scanf("%d", &num1);

    printf("%d", check(num1));
}

int check(int num1){
    if (num1 % 3 == 0 ^ num1 % 7 == 0)
        return 1;
}