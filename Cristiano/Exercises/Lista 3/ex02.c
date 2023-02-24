// 2. Elaborar um algoritmo que lê 2 valores a e b e os escreve com a mensagem: "São múltiplos" ou "Não são múltiplos".

//A * N = B


#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");
    int A, B, maior, menor;

    printf("Insira o valor de A: ");
    scanf("%d", &A);
    printf("Insira o valor de B: ");
    scanf("%d", &B);
    
    if (A > B){
        maior = A;
        menor = B;}
    else {
        maior = B;
        menor = A;}

    if (maior%menor){ printf("%d e %d não são múltiplos!", A, B);}
    else { printf("%d e %d são múltiplos!", A, B);}
    
}