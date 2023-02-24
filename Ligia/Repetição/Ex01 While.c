#include <stdio.h>
#include <locale.h>

void main(){
    
    setlocale(LC_ALL,"");
    int num1;
    num1 = 1;
    while (num1<11)
    {
        printf("O dobro do número %d = %d \n", num1, num1*2);
        num1++;
    }
    
}