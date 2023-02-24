// Write a C program to count the number of two 5's are next to each other in an array of integers. Also count the situation where the second 5 is actually a 6.

#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "");
    int arrsize = 10, arr[arrsize];
    time_t t;
    srand((unsigned) time(&t));

    for (int i = 0; i < arrsize; i++){
        arr[i] = rand() % 6;
        printf("%d\t", arr[i]);
    }
    
    printf("\n%d", check(arr, arrsize));
}

int check(int array[], int arraysize){
    int count = 0;
    for (int i = 0; i < arraysize - 1 ; i++){
        if (array[i] == 5 && (array[i+1] == 5 || array[i+1] == 6))
            count++;
    }
    return count;
}