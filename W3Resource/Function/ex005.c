// Write a program in C to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 using the function.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int soma;

    soma = +(fat(1)/1)+(fat(2)/2)+(fat(3)/3)+(fat(4)/4)+(fat(5)/5);
    printf("%d", soma);
}

int fat(int x){
    return x == 0 ? 1 : x*fat(x - 1);
}