// Write a program in C to make such a pattern like right angle triangle with number increased by 1.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int num, i, j, k = 1;

    printf("Insira quantidade de linhas: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++){
        for (j = 1; j <= i; j++){
            printf("%d ", k++);
        }
        printf("\n");
    }
}