//Uma companhia de seguros tem três categorias de seguros baseadas na idade e ocupação do segurado. Somente pessoas com pelo menos 18 anos e não mais de 70 anos podem adquirir apólices de seguros. Quanto às classes de ocupações foram definidos três grupos de risco. A tabela a seguir fornece as categorias em função da faixa de idade e do grupo de risco: 
//          b   m   a
// 18 a 24  7   8   9
// 25 a 40  4   5   6
// 41 a 70  1   2   3

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    unsigned short int idade;
    char categoria;

    printf("Insira a idade do segurado: ");
    scanf("%d", &idade);
    printf("Insira o grupo de risco [B/M/A]: ");
    scanf(" %c", &categoria);

    if (idade < 18 || idade > 70)
        printf("Essa pessoa não pode mais adquirir apólices de seguros.");
    else if (categoria == 'B' || categoria == 'b'){
        if (idade > 17 && idade < 25)
            printf("O código do seguro é 7");
        else if (idade > 24 && idade < 41)
            printf("O código do seguro é 4");
        else if (idade > 40 && idade < 71)
            printf("O código do seguro é 1");
    }
    else if (categoria == 'M' || categoria == 'm'){
        if (idade > 17 && idade < 25)
            printf("O código do seguro é 8");
        else if (idade > 24 && idade < 41)
            printf("O código do seguro é 5");
        else if (idade > 40 && idade < 71)
            printf("O código do seguro é 2");
    }
    else if (categoria == 'A' || categoria == 'a'){
        if (idade > 17 && idade < 25)
            printf("O código do seguro é 9");
        else if (idade > 24 && idade < 41)
            printf("O código do seguro é 6");
        else if (idade > 40 && idade < 71)
            printf("O código do seguro é 3");
    }
}