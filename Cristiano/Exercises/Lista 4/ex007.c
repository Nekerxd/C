// (WHILE) A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados sobre o salário e número de filhos. A prefeitura deseja saber:  
// A) média do salário da população; B) média do número de filhos; C) maior salário; D) percentual de pessoas com salário até R$100,00.
// O final da leitura de dados se dará com a entrada de um salário negativo.  

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int sal100, pessoas, filho, totFilho;
    float totSalario, maiorSalario, salario;

    sal100 = pessoas = totFilho = maiorSalario = totSalario = 0;

    while (salario > -1){

        printf("");
        scanf("%f", &salario);

        printf("");
        scanf("%d", &filho);
        
        if (salario > -1){
            if (salario < 101)
                sal100++;
            
            totSalario += salario;
            totFilho += filho;
            pessoas++;
        }
    }
    
    printf("Porcentual de pessoas com salário até R$100,00 : %.0f", ((sal100 * 100) / pessoas));
}