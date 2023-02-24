// Write a C program to find the larger value from two positive integer values that is in the range 20..30 inclusive, or return 0 if neither is in that range.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    unsigned int num1, num2;
    printf("Insira dois números: ");
    scanf("%d %d", &num1, &num2);

    printf("%d", check(num1, num2));
}

int check(int x, int y){
    if ((x > 19 && x < 31) && (y > 19 && y < 31))
    {
        if(x >= y)
            return x;
        else
            return y;
    } else if ((x < 20 || x > 30) && (y < 20 || y > 30))
        return 0;
    else
        return 0;
}