// Write a program in C to make such a pattern like a pyramid with a number which will repeat the number in the same row.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int i, j, espc, linha, k;

    printf("Insira a quantidade de linnhas: ");
    scanf("%d", &linha);
    espc = linha + 4 - 1;
    for(i=1;i<=linha;i++){
        for(k=espc;k>=1;k--){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d ", i);
        }
	printf("\n");
    espc--;
   }
}
