// Write a C program to find the larger from two given integers. However if the two integers have the same remainder when divided by 5, then the return the smaller integer. If the two integers are the same, return 0.

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
    int maior, menor;
    
    maior = x > y ? x : y;
    menor = x > y ? y : x;

    if (x == y)
        return 0;
    else if (x % 5 == y % 5)
        return menor;
    return maior;
}