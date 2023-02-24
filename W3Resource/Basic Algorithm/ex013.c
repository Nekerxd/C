// Write a C program to check if two given non-negative integers have the same last digit.

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "");
    unsigned int num1, num2;
    printf("Insira dois números: ");
    scanf("%d %d", &num1, &num2);
    sqrt(num1);

    printf("%d", check(num1, num2));
}

int check(x, y){
    if (abs(x % 10) == abs(y % 10))
        return 1;
    return 0;
}
