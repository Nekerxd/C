// (WHILE) Escreva um algoritmo que calcule a média aritmética das 3 notas dos alunos de uma classe. O algoritmo deverá ler, além das notas, o código do aluno e deverá ser encerrado quando o código for igual a zero.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int cod = 1, count = 1; float media = 0, nota[3];
    while (cod != 0)
    {
        printf("\nInsira o código do aluno: ");
        scanf("%d", &cod);
        if (cod != 0){
            for (int i = 0; i < 3; i++)
            {
                printf("Insira a %dº nota: ", count);
                scanf("%f", &nota[i]);
            }
            media = ((nota[0]+nota[1]+nota[2])/3.0);
            printf("\nA média do aluno de código %d, é %.1f", cod, media);
        } else if(cod == 0)
            printf("Programa encerrado!");
    }
}