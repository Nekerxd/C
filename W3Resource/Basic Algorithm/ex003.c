// Write a C program to check two given integers, and return true if one of them is 30 or if their sum is 30.
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int num1, num2;
    printf("Insira dois números: ");
    scanf("%d %d", &num1, &num2);
    printf("%d", check(num1, num2));
}

int check(int x, int y){
    return x == 30 || y == 30 || x+y == 30;
}