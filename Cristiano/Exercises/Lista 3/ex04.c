#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");
    int codigo, quantidade;
    float preco;
    printf("=================| Cardápio |================="
    "\nProduto \t\tCódigo \t\tpreço"
    "\nCachorro quente \t100 \t\t1,20"
    "\nBauru simples \t\t101 \t\t1,30"
    "\nBauru com ovo \t\t102 \t\t1,50"
    "\nHambúrguer \t\t103 \t\t1,20"
    "\nCheeseburguer \t\t104 \t\t1,30"
    "\nRefrigerante \t\t105 \t\t1,00"
    "\n==============================================");
    printf("\nInsira o código do produto desejado: ");
    scanf("%d", &codigo);

    if (codigo > 99 && codigo < 106)
    {
        printf("\nInsira a quantidade desejada: ");
        scanf("%d", &quantidade);

        if (codigo == 100) {
            preco = quantidade * 1.2;
        } else if (codigo == 101 || codigo == 104) {
            preco = quantidade * 1.3;
        } else if (codigo == 102) {
            preco = quantidade * 1.5;
        } else {
            preco = quantidade * 1;
        }
        
        printf("\nTotal a pagar: R$%.2f", preco);
    }
    else {
        printf("\nProduto inválido");
    }
}