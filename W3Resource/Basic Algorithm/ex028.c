// Write a C program to check two given integers, each in the range 10..99. Return true if a digit appears in both numbers, such as the 3 in 13 and 33.

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
    if ((x > 9 && x < 100) && (y > 9 && y < 100))
        return x / 10 == y / 10 || x / 10 == y % 10 || x % 10 == y / 10 || x % 10 == y % 10;
}