//Write a C program to check whether y is greater than x, and z is greater than y from three given integers x,y,z.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int num1, num2, num3;
    printf("Insira dois números inteiros: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("%d", check(num1, num2, num3));
}

int check(int x, int y, int z){
    return y > x && z > y;
}