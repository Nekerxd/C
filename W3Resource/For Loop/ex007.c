// Write a program in C to display the multiplication table vertically from 1 to n

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int i, j, num;

    printf("Insira um número: ");
    scanf("%d", &num);

    for (j = 1; j < 11; j++){
        for (i = 1; i <= num ; i++){
            printf("%dx%d = %d, ", i, j, i*j);
        }
        printf("\n");
    }
}