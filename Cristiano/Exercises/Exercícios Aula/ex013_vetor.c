#include <stdio.h>
#include <locale.h>
#include <time.h>
#define N 5

int main(){
    int vetor1[N], vetor2[N], i;
    setlocale(LC_ALL, "");
    time_t t;
    srand((unsigned) time(&t));
    for (i = 0; i < N; i++){
        vetor1[i] = rand()%11;
        vetor2[i] = vetor1[i] * 2;
    }
    for (i = 0; i < N; i++){
        printf("\n %d = %d * 2", vetor2[i], vetor1[i]);
    }
}