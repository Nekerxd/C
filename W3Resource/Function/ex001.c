//  Write a program in C to show the simple structure of a function.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int num1, num2;
    printf("Insira dois números inteiros: ");
    scanf("%d %d", &num1, &num2);

    printf("A soma dos dois número é igual a: %d", check(num1, num2));
}

int check(x, y){
    return (x + y);
}