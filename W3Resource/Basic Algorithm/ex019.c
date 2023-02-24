// Write a C program to to test whether a given non-negative number is a multiple of 13 or it is one more than a multiple of 13.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    unsigned int num1;
    printf("Insira um número inteiro não negativo: ");
    scanf("%d", &num1);

    printf("%d", check(num1));
}

int check(int num1){
    if (num1 % 13 == 0 || (num1 % 13) == 1)
        return 1;
    return 0;
}
