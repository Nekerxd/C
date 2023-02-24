// Write a C program to check which number nearest to the value 100 among two given integers. Return 0 if the two numbers are equal.

#include <stdio.h>
#include <locale.h>

int main(){
    int num1, num2;
    setlocale(LC_ALL, "");
    
    printf("Insira dois números: ");
    scanf("%d %d", &num1, &num2);

    check(num1, num2) == 0 ? printf("Os numeros são iguais.") : printf("%d é o mais próximo de 100.", check(num1, num2));
    
}

int check(x, y){
    if (abs(x - 100) > abs(y - 100))
        return y;
    else if (abs(x - 100) < abs(y - 100))
        return x;
    else
        return 0;
}