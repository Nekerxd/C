// Write a C program to check two given integers whether either of them is in the range 100..200 inclusive.

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
    if ((x > 99 && y > 99) && (x < 201 && y < 201))
        return 1;
    return 0;
}