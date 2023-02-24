// Write a C program to compute the sum of the three given integers. However, if any of the values is in the range 10..20 inclusive then that value counts as 0, except 13 and 17.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int num[3];
    printf("Insira dois números inteiros: ");
    scanf("%d %d %d", &num[0], &num[1], &num[2]);

    printf("%d", check(num[0], num[1], num[2]));
}

int check(int x, int y, int z){
    int soma = x + y + z;
    if ()
    {
        
    }
}