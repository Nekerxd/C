// Write a C program to check whether the sequence of numbers 1, 2, 3 appears in a given array of integers somewhere.

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(){
    setlocale(LC_ALL, "");
    int arrsize = 10, arr[arrsize], i;
    time_t t;
    srand((unsigned) time(&t));

    for (i = 0; i < arrsize; i++)
    {
        arr[i] = rand() % 100;
    }

    // arr[5] = 3;
    // arr[4] = 2;
    // arr[3] = 1;

    printf("%d", check(arr, arrsize));
}

int check(int array[], int t_array){
    for (int i = 0; i < t_array; i++){
        if (array[i] == 1 && array[i+1] == 2 && array[i+2] == 3)
            return 1;
    }
    return 0;
}
