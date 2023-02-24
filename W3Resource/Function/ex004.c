// Write a program in C to check a given number is even or odd using the function.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int num;
    printf("Insira um número: ");
    scanf("%d", &num);

    check(num);
}

void check(int x){
    if (x % 2 == 0)
        printf("%d é par", x);
    else
        printf("%d é ímpar", x);
}