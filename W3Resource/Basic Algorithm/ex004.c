// Write a C program to check a given integer and return true if it is within 10 of 100 or 200.

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    int num1;
    setlocale(LC_ALL, "");

    printf("Insira dois números: ");
    scanf("%d", &num1);

    printf("%d", check(num1));
}

int check(int x){
    if (abs(x - 100) <11 || abs(x - 200) <11)
        return 1;
    return 0;
}