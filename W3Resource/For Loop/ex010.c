// Write a program in C to display the pattern like right angle triangle with a number.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int num, i, j;

    printf("Insira quantidade de linhas: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++){
        for (j = 1; j <= i; j++){
            printf("%d", j);
        }
        printf("\n");
    }
}