#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int num, i;
    unsigned long fatorial = 1;
    
    printf("Insira um número: ");
    scanf("%d", &num);

    for (i = num; i > 1; i--){
        fatorial *= i;
    }
    
    printf("For - O fatorial de %d é igual a %lu\n", num, fatorial);
    
    fatorial = 1;
    i = num;

    while (i > 1){
        fatorial *= i--;
    }
    
    printf("While - O fatorial de %d é igual a %lu\n", num, fatorial);
    
    fatorial = 1;
    i = num;
    if (num > 1)
        do{
            fatorial *= i--;
        } while (i > 1);
    
    printf("Do While - O fatorial de %d é igual a %lu\n", num, fatorial);
}