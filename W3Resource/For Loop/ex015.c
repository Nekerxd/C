// Write a C program to calculate the factorial of a given number.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int num, i, fat = 1;

    printf("Insira um número: ");
    scanf("%d", &num);

    for (i = num; i > 0; i--){
        fat *= i;
    }
    printf("%d", fat);
}