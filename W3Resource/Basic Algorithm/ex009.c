//  Write a C program to check whether two given integer values are in the range 20..50 inclusive. Return true if 1 or other is in the said range otherwise false. Go to the editor.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int num1, num2;
    printf("Insira dois números: ");
    scanf("%d %d", &num1, &num2);

    printf("%d", check(num1, num2));
}

int check(x, y){
    if ((x > 19 && x < 51) || (y > 19 && y < 51))
        return 1;
    return 0;
}