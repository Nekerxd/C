#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int i, j, k, qtd_linha, linha_atual, espc, num = 2;
    
    while (num % 2 == 0){
        printf("Escolha um número ímpar: ");
        scanf("%d", &num);
    }
    
    qtd_linha = (num/2)+1;
    linha_atual = 0;
    espc = num-1;

    for (i = 0; i < qtd_linha; i++){
        for (j = 0; j < espc; j++){
            printf(" ");
        }
        espc-=2;
        for (k = qtd_linha-linha_atual; k <= qtd_linha+linha_atual; k++){
            printf("%d ",k);
            if (k == qtd_linha+linha_atual)
                printf("\n");
        }
        linha_atual++;
    }
}