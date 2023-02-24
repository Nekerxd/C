//Uma companhia de seguros tem três categorias de seguros baseadas na idade e ocupa??o do segurado. Somente pessoas com pelo menos 18 anos e não mais de 70 anos podem adquirir apólices de seguros. Quanto ?s classes de ocupa??es foram definidos três grupos de risco. A tabela a seguir fornece as categorias em fun??o da faixa de idade e do grupo de risco: 
//          b   m   a
// 18 a 24  7   8   9
// 25 a 40  4   5   6
// 41 a 70  1   2   3

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int idade, cod, id = 1;
    char categoria;
    

    printf("Insira a idade do segurado e o grupo de risco [B/M/A]: ");
    scanf("%d %c", &idade, &categoria);

    if (idade < 18 || idade > 70)
        printf("Essa pessoa não pode mais adquirir apólices de seguros.");
    else if (categoria == 'B' || categoria == 'b'){
        if (idade < 25) cod = 7;
        else if (idade < 41) cod = 4;
        else cod = 1;
    }
    else if (categoria == 'M' || categoria == 'm'){
        if(idade < 25) cod = 8;
        else if (idade < 41) cod = 5;
        else cod = 1;
    }  
    else if (categoria == 'A' || categoria == 'a'){
        if(idade < 25) cod = 9;
        else if (idade < 41) cod = 6;
        else cod = 3;
    }
    printf("O código do seguro é %d", cod);
}