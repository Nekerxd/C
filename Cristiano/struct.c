// Para trabalhar com string utilizar a biblioteca #include <string.h>

#include <stdio.h>
#include <locale.h>
#include <string.h>
#define N 3
struct Pessoa
{
    char nome[30];
    int idade;
    float altura;
};
typedef struct Pessoa Pessoa;


int main(){
    setlocale(LC_ALL, "");
    int i;
    Pessoa pessoas[N];

    for (i = 0; i < N; i++){
        printf("Nome: ");
        scanf(" %s", pessoas[i].nome);
        printf("Altura: ");
        scanf("%f", pessoas[i].altura);
        printf("Idade: ");
        scanf("%d", pessoas[i].idade);
    }
    
    // printf("Insira o nome: ");
    // gets(matheus.nome);

    // strcpy(matheus.nome, "Matheus Ferreira de Carvalho");
    // setbuf(stdin, NULL);

    for (i = 0; i < N; i++){
        printf("Nome: %s\nAltura: %.2f\nIdade: %d", pessoas[i].nome, pessoas[i].altura, pessoas[i].idade);
    }
}

