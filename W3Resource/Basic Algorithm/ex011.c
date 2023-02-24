// Write a C program to check whether two given integers are in the range 40..50 inclusive, or they are both in the range 50..60 inclusive.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int num1, num2;
    printf("Insira dois números: ");
    scanf("%d %d", &num1, &num2);

    printf("%d", check(num1, num2));
}

int check(x, y){
    if ((x > 39 && x < 51 && y > 39 && y < 51) || (x > 49 && x < 61 && y > 49 && y < 61))
        return 1;
    return 0;
}