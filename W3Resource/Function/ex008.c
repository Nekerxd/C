// Write a program in C to get the largest element of an array using the function.

#include <stdio.h>
#include <locale.h>
#define N 5

int main(){
    setlocale(LC_ALL,"");
    int vet[N], i;
    
    for (i = 0; i < N; i++){
        printf("O elemento %d: ", i);
        scanf("%d", &vet[i]);
    }
    printf("%d", check(vet));
}

int check(int vet[]){
    int i, maior;
    maior= vet[0];
    for (i = 0; i < N; i++){
        if(maior < vet[i])
        maior = vet[i];
    }
    return maior;
}