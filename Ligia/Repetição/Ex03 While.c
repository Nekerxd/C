#include <stdio.h>
#include <locale.h>

void main(){
    
    setlocale(LC_ALL,"");
    int inicial, final;
    printf("Digite o valor inicial: ");
    scanf("%d", &inicial);
    printf("Digite o valor final: ");
    scanf("%d", &final);
    while (inicial<=final)
    {
        printf("%d \n", inicial);
        inicial++;
    }
    printf("Terminou a contagem!");
}