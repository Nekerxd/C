// (WHILE) A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e número de filhos. A prefeitura deseja saber:  
// a) média do salário da população;
// b) média do número de filhos;
// c) maior salário;
// d) percentual de pessoas com salário até R$100,00.
// O final da leitura de dados se dará com a entrada de um salário negativo. 

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int filho, totfilho, pessoas, minsal;
    float salario, totalsal, maiorsal, percent;

    totfilho = pessoas = minsal = 0;
    salario = totalsal = maiorsal = 0;

    while (salario >-1)
    {
        printf("Quantidade de filhos: ");
        scanf("%d", &filho);

        printf("Salário: ");
        scanf("%f", &salario);

        if (salario >-1){
            if (salario < 101)
                minsal++;
            totfilho += filho;
            totalsal += salario;
            maiorsal = (salario > maiorsal ? salario : maiorsal);
            pessoas++;
        }
    }
    printf("\nA média de filhos é de %d", (totfilho / pessoas));
    printf("\nA média salarial é de R$%.2f", (totalsal / pessoas));
    printf("\nO maior salário é de R$%.2f", maiorsal);
    printf("\nO percentual de pessoas com salário até R$100,00 é de %.1f%%", (float)((minsal * 100) / pessoas));
}