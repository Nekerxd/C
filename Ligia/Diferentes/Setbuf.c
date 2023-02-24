#include <stdio.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL, "");

    int age;
    char nome[50];

    printf("Insira o seu nome: ");
    setbuf(stdin, NULL);
    scanf("%c", &nome);
    printf("Insira sua idade: ");
    scanf("%d", &age);
    printf("Seu nome é %s e você tem %d anos!", nome, age);
}