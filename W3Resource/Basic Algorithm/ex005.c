//  Write a C program to check whether a given positive number is a multiple of 3 or a multiple of 7.
#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    unsigned int num1;

    printf("Insira um número: ");
    scanf("%d", &num1);

    printf("%d", check(num1));
}

int check(int x){
    if (x % 7 == 0 || x % 3 == 0)
        return 1;
    return 0;    
}