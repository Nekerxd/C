// Write a C program to check three given integers and return true if one of them is 20 or more less than one of the others.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int num1, num2, num3;
    printf("Insira dois números inteiros: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("%d", check(num1, num2, num3));
}

int check(int x, int y, int z){
    return abs(x - y) > 19 || abs(x - z) > 19 || abs(y - z) > 19;
}