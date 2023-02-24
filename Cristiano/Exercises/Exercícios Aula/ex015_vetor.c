#include <stdio.h>
#include <locale.h>
#include <time.h>
#define N 5

int main(){
    setlocale(LC_ALL, "");
    int vetorA[N], vetorB[N], vetorC[N*2], i;
    time_t t;
    srand((unsigned) time(&t));

    for (i = 0; i < N; i++){
        vetorA[i] = rand()%50;
        vetorB[i] = rand()%50;
        vetorC[i*2] = vetorA[i];
        vetorC[(i*2)+1] = vetorB[i];
    }
    
    for (i = 0; i < N*2; i++){
        printf("\nVetorC[%d] = %d", i, vetorC[i]);
    }
    
}
