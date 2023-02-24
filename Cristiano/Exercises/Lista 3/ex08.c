// Escreva um algoritmo que leia três números inteiros e positivos (A, B, C) e mostre-os em ordem decrescente.

#include <stdio.h>
#include <locale.h>
#include <stdbool.h>


int main(){
    setlocale(LC_ALL, "");
    int temp, A, B, C, menor, maior, meio;

    printf("\nInsira três números inteiros e positivos: ");
    scanf("%d %d %d", &A, &B, &C);

    maior = (A > B && A > C ? A : B > A && B > C ? B : C);
    menor = (A < B && A < C ? A : B < A && B < C ? B : C);
    meio = (maior > A && A < menor ? A : maior > B && B < menor ? B : C);

    printf("\nOs números %d, %d e %d em ordem decrescente: %d, %d e %d", A, B, C, menor, meio, maior);
}