// Write a C program to check whether a given temperatures is less than 0 and the other is greater than 100.

#include <stdio.h>
#include <locale.h>

int check(float x, float y){
    if ((x > 100 || x < 0) || (y > 100 || y < 0))
        return 1;
    return 0;
}

int main(){
    setlocale(LC_ALL, "");
    float temp1, temp2;
    printf("Insira duas temperaturas: ");
    scanf("%f %f",&temp1, &temp2);
    printf("%d", check(temp1, temp2));
}
