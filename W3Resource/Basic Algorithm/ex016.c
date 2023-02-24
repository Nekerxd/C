// Write a C program to check if a triple is presents in an array of integers or not. If a value appears three times in a row in an array it is called a triple.

#include <stdio.h>
#include <locale.h>
#include <time.h>
#define arrsize 10

int main(){
    setlocale(LC_ALL, "");
    int arr[arrsize], i;
    time_t t;
    srand((unsigned) time(&t));

    for (i = 0; i < arrsize; i++)
    {
        arr[i] = rand() % 3;
    }

    arr[5] = arr[4] = 3;

    printf("%d", check(arr));
}

int check(int array[]){
    for (int i = 0; i < arrsize; i++){
        if (array[i] == array[i+1] && array[i+1] == array[i+2])
            return 1;
    }
    return 0;
}