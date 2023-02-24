// Write a program in C to display the cube of the number upto given an integer.

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "");
    int i, num, j, cubo;

    printf("Insira a quantidade de termos: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++){
        cubo = 1;
        for (j = 3; j > 0; j--){
            cubo *= i;
        }
        printf("\nO número é %d e seu cubo é %d", i, cubo);
    }
}