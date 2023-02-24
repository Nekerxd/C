#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");
    int codigo, quantidade;
    float preco;
    
    printf("\n==============| Tabela | =============="
    "\nCódigo do Produto    Preço unitário"
    "\n1001                 5,32"
    "\n1324                 6,45"
    "\n6548                 2,37"
    "\n0987                 5,32"
    "\n7623                 6,45"
    "\n=======================================");

    printf("\n Insira o código do produto: ");
    scanf("%d", &codigo);
    printf("\n Insira a quantidade do produto: ");
    scanf("%d", &quantidade);

    if (codigo == 1001 || codigo == 1324 || codigo == 6548 || codigo == 987 || codigo == 7623 ) {
        if (codigo == 1001 || codigo == 987) {
            preco = quantidade * 5.32;
        } else if (codigo == 1324 || codigo == 7623) {
            preco = quantidade * 6.45;
        } else {
            preco = quantidade * 2.37;
        }
        printf("\nO total devido: R$%.2f", preco);
    
    } else {
        printf("\nCódigo inválido!");
    }
    
}