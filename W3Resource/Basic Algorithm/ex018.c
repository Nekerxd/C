// Write a C program that accept two integers and return true if either one is 5 or their sum or difference is 5.

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int num1, num2;

    printf("Insira dois números inteiros: ");
    scanf("%d %d", &num1, &num2);

    printf("%d", check(num1, num2));
}

int check(int x, int y){
    if ((abs(x + y) == 5 || abs(y - x) == 5) || (x == 5 || y == 5))
        return 1;
    return 0;
}
