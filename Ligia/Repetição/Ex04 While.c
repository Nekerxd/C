#include <stdio.h>
#include <locale.h>

void main(){
    
    setlocale(LC_ALL,"");
    int num1;
    num1 = 0;
    while (num1<=10)
    {
        printf("%d \n", num1);
        num1 = num1+2;
    }
    printf("Terminou a contagem!");
}