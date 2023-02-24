#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");
    int num1 = 15, num2 = 30;
    
    dobro(&num1, &num2);
    printf("\nApós dobro \nNum1 = %d \nNum2 = %d\n", num1, num2);
    triplo(&num1, &num2);
    printf("\nApós triplo \nNum1 = %d \nNum2 = %d\n", num1, num2);
}

int dobro(int *x, int *y){
    *x = 2 * *x;
    *y = 2 * *y;
}

int triplo(int *x, int *y){
    *x = 3 * *x;
    *y = 3 * *y;
}
