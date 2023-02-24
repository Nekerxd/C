// Write a program in C to display the multiplication table of a given integer.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int i, num;

    printf("Digite um número: ");
    scanf("%d", &num);

    for (i = 1; i <= 10; i++){
        printf("\n%d x %d = %d", num, i, num*i);
    }
}