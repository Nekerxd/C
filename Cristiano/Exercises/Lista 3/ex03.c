// 3. Elabore um algoritmo que dada a idade de um nadador classifica-o em uma das seguintes categorias: 
// infantil A =  5 -  7 anos
// infantil B =  8 - 10 anos
// juvenil  A = 11 - 13 anos
// juvenil  B = 14 - 17 anos
// adulto = maiores de 18 anos

#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");
    int idade;

    printf("Digita a idade do nadador: ");
    scanf("%d", &idade);
    
    if (idade > 5 && idade < 8){
        printf("Infantil A");}
    else if(idade > 7 && idade < 11){
        printf("Infanil B");}
    else if (idade > 10 && idade < 14){
        printf("Juvenil A");}
    else if (idade > 13 && idade < 18){
        printf("Juvenil B");}
    else if (idade >= 18){
        printf("Adulto");}
    else { 
        printf("Essa pessoa não se enquadra em nenhuma categoria.");}
}
