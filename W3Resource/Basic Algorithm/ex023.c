// Write a C program to check whether it is possible to add two integers to get the third integer from three given integers.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int n1, n2, n3;
    printf("Insira três números: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    printf("%d", check(n1, n2, n3));
}

int check(int n1, int n2, int n3){
    return (n1 + n2 == n3 ? 1 : 0);
}