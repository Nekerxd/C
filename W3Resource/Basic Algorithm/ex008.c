// Write a C program to check whether three given integer values are in the range 20..50 inclusive. Return true if 1 or more of them are in the said range otherwise return false.
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int num1, num2, num3;
    printf("Insira três números: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("%d", check(num1, num2, num3));
}

int check(x, y, z){
    if ((x > 19 && x < 51) || (y > 19 && y < 51) || (z > 19 && z < 51))
        return 1;
    return 0;
}