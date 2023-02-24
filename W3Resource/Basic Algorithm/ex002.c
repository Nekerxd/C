//Write a C program to get the absolute difference between n and 51. If n is greater than 51 return triple the absolute difference.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int num, n, x = 51;
    
    printf("Insira um número: ");
    scanf("%d", &n);

    num = (n < x ? x - n : (n - x)*3);
    printf("%d", num);
}