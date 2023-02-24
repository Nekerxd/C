// A Secretaria de Meio Ambiente que controla o índice de poluição mantém 3 grupos deindústrias que são altamente poluentes do meio ambiente. O índice de  poluição  aceitável varia  de  0,05  até  0,25.  Se  o  índice  sobe  para  0,3  as indústrias do 1o grupo são intimadas asuspenderem suas atividades, se o índice crescer para 0,4 as indústriasdo 1o e 2o gruposão intimadas a suspenderem suas atividades, se o índice atingir 0,5 todos os gruposdevem ser notificados a paralisarem suas atividades. Faça um programa que leiao índice de poluição medido e emita a notificação adequada aos diferentes grupos deempresas.

#include <stdio.h>
#include <locale.h>

void avalIndice(float indice);

int main(){
    setlocale(LC_ALL,"");
    float indice;

    printf("Informe o índice: ");
    scanf("%f", &indice);

    avalIndice(indice);
}

void avalIndice(float indice){
    indice < 0.26 ? printf("\nÍndice de poluição aceitável!\n") :
     indice <= 0.3 ? printf("\nGrupo 1 intimados!\n") :
      indice <= 0.4 ? printf("\nGrupos 1 e 2 intimados!\n") :
       printf("\nTodos os grupos devem paralisar as atividades!\n");
}
