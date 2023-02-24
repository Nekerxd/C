#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int num1 = 10, num2 = 30;
    
    dobro(&num1, &num2);
    printf("\nNum1 = %d \nNum2 = %d", num1, num2);
}

int dobro(int *x, int *y){
    *x = 20;
    *y = 60;
}