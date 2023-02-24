#include <stdio.h>

void main(){
    char nome[50], opcao;
    float nota, media, soma;
    int contNota;
    
    for (opcao = 's'; opcao == 's' || opcao == 'S'; opcao)
    {
        printf("Digite o nome do aluno: ");
        setbuf(stdin, NULL);
        gets(nome);
        soma = 0;
        media = 0;
        for (contNota = 1; contNota <= 4; contNota++)
        {
            printf("Digite a [%d] nota: ",contNota);
            scanf("%f", &nota);
            soma = soma + nota;
        }
        media = soma/ 4;
        printf("\nA media do aluno %s = %0.2f \n", nome, media);
        if (media >= 6)
        {
            printf("%s esta aprovado \n", nome);
        }
        else if (media <6 && media >= 3)
        {
            printf("%s esta em recuperacao \n", nome);
        }
        else
        {
        printf("%s esta reprovado \n", nome);
        }
        printf("\nDeseja digitar as notas de outro aluno? Tecle s sim ou n nao: ");
        scanf(" %c", &opcao);
        system("cls");
    }
    printf("\nTerminou o programa \n");
}