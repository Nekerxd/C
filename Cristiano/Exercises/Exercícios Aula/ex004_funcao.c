#include <stdio.h>
#include <locale.h>

void faculdade();
float PI();
void valorInt(int num);
int soma(int num1, int num2);

int main(){
    setlocale(LC_ALL, "");

    faculdade();

    printf("Valor de PI: %g\n", PI());

    valorInt(37);

    printf("Soma: %d\n", soma(7, 3));
}

void faculdade(){
    printf("Fatec Jales\n");
}

float PI(){
    return 3.14159;
}

void valorInt(int num){
    printf("Número: %d\n",num);
}

int soma(int num1, int num2){
    return num1+num2;
}