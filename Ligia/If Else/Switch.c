#include <stdio.h>
#include <locale.h>

void main()
{
    char estadoCivil;
    printf("Digite [c] para casado(a) \n");
    printf("Digite [s] para solteiro(a) \n");
    printf("Digite [d] para divorciado(a) \n");
    printf("Digite [v] para vi?vo(a) \n");
    printf("Qual o seu estado civil: ");
    scanf("%c", &estadoCivil);
    switch (estadoCivil)
    {
    case 'c':
        printf("\n O estado civil selecionado é casado(a) \n");
        break;
    case 's':
        printf("\n O estado civil selecionado é solteiro(a) \n");
        break;
    case 'd':
        printf("\n O estado civil selecionado é divorciado(a) \n");
        break;
    case 'v':
        printf("\n O estado civil selecionado é viúvo(a) \n");
        break;
    default:
        printf("\n Opção inválida \n");
        break;
    }
}