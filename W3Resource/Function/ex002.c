// Write a program in C to find the square of any number using the function.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int num;
    printf("Insira um número inteiro: ");
    scanf("%d", &num);

    printf("O quadrado de %d é %d", num, check(num));
}

int check(x){
    return (x * x);
}