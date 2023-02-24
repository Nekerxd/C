// Write a program in C to make such a pattern like a pyramid with numbers increased by 1.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int i, j, espc, linha, k, t=1;

    printf("Insira a quantidade de linnhas: ");
    scanf("%d", &linha);
    espc = linha + 4 - 1;
    for(i=1;i<=linha;i++){
        for(k=espc;k>=1;k--){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("%d ",t++);
        }
	printf("\n");
    espc--;
   }
}
