// Write a C program to check two given integers and return the value whichever value is nearest to 13 without going over. Return 0 if both numbers go over.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int num1, num2;

    printf("Insira dois números inteiros: ");
    scanf("%d %d", &num1, &num2);

    printf("%d", check(num1, num2));
}

int check(int x , int y){
    if (x > 13 && y > 13)
        return 0;
    else if (x > 13 && y < 13)
        return y;
    else if (x < 13 && y > 13)
        return x;
    else
        return (abs(x - 13) < abs (y - 13) ? x : y);
}