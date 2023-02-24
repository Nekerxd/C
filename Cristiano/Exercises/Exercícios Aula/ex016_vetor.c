#include <stdio.h>
#include <locale.h>
#include <time.h>
#define V 50
#define C 5

int main(){
    int voto[V], candidato[C], i, vencedor = 0;
    setlocale(LC_ALL, "");

    time_t t;
    srand((unsigned) time(&t));

    for (i = 0; i < C; i++){
        candidato[i] = 0;
    }
    
    for (i = 0; i < V; i++){
        voto[i] = rand()%6;            
        candidato[voto[i] == 0 ? voto[i] : voto[i]-1]++;
    }

    printf("Total de votos por candidato\n");
    for (i = 0; i < C; i++){
        printf("\nCandidato %d: %d", i+1, candidato[i]);
    }

    for (i = 0; i < C; i++){
        vencedor = (candidato[vencedor] > candidato[i] ? vencedor : i);
    }

    printf("\nO vencedor é o canditado %d com %d votos!", vencedor+1, candidato[vencedor]);
}