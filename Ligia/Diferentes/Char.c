#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"");
    char nome[200];
    char sexo;

    printf("Digite o seu nome: ");
    gets(nome);
    printf("Digite (F) para Feminino ou (M) para Masculino: ");
    scanf("%c", &sexo);
    printf("Seu nome é %s e seu sexo é %c!", nome, sexo);
    printf("\n");
    system("pause");

}
