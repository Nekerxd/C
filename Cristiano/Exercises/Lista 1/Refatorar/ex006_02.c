//Uma companhia de seguros tem três categorias de seguros baseadas na idade e ocupa??o do segurado. Somente pessoas com pelo menos 18 anos e não mais de 70 anos podem adquirir apólices de seguros. Quanto ?s classes de ocupa??es foram definidos três grupos de risco. A tabela a seguir fornece as categorias em fun??o da faixa de idade e do grupo de risco: 
//          b   m   a
// 18 a 24  7   8   9
// 25 a 40  4   5   6
// 41 a 70  1   2   3

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int idade, cod;
    char categoria;

    printf("Insira a idade do segurado: ");
    scanf("%d", &idade);
    printf("Insira o grupo de risco [B/M/A]: ");
    scanf(" %c", &categoria);

    if (idade < 18 || idade > 70)
        printf("Essa pessoa não pode mais adquirir apólices de seguros.");
    else if (categoria == 'B' || categoria == 'b')
        cod = (idade > 17 && idade < 25 ? cod = 7 : idade > 24 && idade < 41 ? cod = 4 : idade > 40 && idade < 71 ? cod = 1 : printf("O segurado não pode adquirir apólices de seguros"));
    else if (categoria == 'M' || categoria == 'm')
        cod = (idade > 17 && idade < 25 ? cod = 8 : idade > 24 && idade < 41 ? cod = 5 : idade > 40 && idade < 71 ? cod = 2 : printf("O segurado não pode adquirir apólices de seguros"));
    else if (categoria == 'A' || categoria == 'a')
        cod = (idade > 17 && idade < 25 ? cod = 9 : idade > 24 && idade < 41 ? cod = 6 : idade > 40 && idade < 71 ? cod = 3 : printf("O segurado não pode adquirir apólices de seguros"));
    printf("O código do seguro é %d", cod);
}