// Write a program in C to display the first 10 natural numbers.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int i;

    for (i = 1; i < 11; i++){
        printf("[%d]\t", i);
    }    
}