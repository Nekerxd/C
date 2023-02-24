#include <stdio.h>
#include <locale.h>
#define N 5

int main(){
    setlocale(LC_ALL, "");
    // Preenchendo o vetor na declaração (na unha)
    int vetor[N] = {1, 2, 3, 4, 5};

    printf("%d\n", vetor[0]);    
    printf("%d\n", vetor[1]);    
    printf("%d\n", vetor[2]);    
    printf("%d\n", vetor[3]);    
    printf("%d\n", vetor[4]);    

    // Preenchendo o vetor depois da declação (na unha)

    int vetor2[N];
    vetor2[0] = 10;
    vetor2[1] = 20;
    vetor2[2] = 30;
    vetor2[3] = 40;
    vetor2[4] = 50;
    printf("%d\n", vetor2[0]);    
    printf("%d\n", vetor2[1]);    
    printf("%d\n", vetor2[2]);    
    printf("%d\n", vetor2[3]);    
    printf("%d\n", vetor2[4]);    

    // Preenchendo o vetor depois da declação (na unha)

    int vetor3[N], i;

    // Preenchendo o vetor usando laço

    for (i = 0; i < N; i++){
        vetor3[i] = (i+1)*10;
    }
    for (i = 0; i < N; i++){
        printf("vetor3[%d] = %d\n", i, vetor3[i]);
    }

    // Obs.: Poderia ter impresso dentro do laço

    int vetor4[N];
    

}