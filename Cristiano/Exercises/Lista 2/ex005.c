// (WHILE) Faça um algoritmo que determine e escreva:  
// - a maior idade dos habitantes
// - a quantidade de indivíduos do sexo feminino cuja idade está entre 18 e 35 anos inclusive e que tenham olhos verdes e cabelos louros.
// O final do conjunto de habitantes é reconhecido pelo valor -1 entrada como idade.

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int idade = 0, maiorid = 0, contador = 0, cabelo, olhos;
    char sexo;

    while (idade >-1)
    {
        printf("\nIdade: ");
        scanf("%d", &idade);
        
        if (idade != -1){
            printf("\nSexo [M/F]: ");
            scanf(" %c", &sexo);

            printf("\nCor dos cabelos: \n[0] Castanho \n[1] Preto \n[2] Ruivo \n[3] Louro \nDigite a opção correspondente: ");
            scanf("%d", &cabelo);

            printf("\nCor dos olhos: \n[0] Azuis \n[1] Castanhos \n[2] Verdes \n[3] Avelã \nDigite a opção correspondente: ");
            scanf("%d", &olhos);

            maiorid = (idade > maiorid ? idade : maiorid);
            if ((sexo == 'f' || sexo == 'F') && (idade > 17 && idade < 36) && (cabelo == 3) && (olhos == 2))
                contador++;
        }
    }
    printf("\nA pessoa mais velha dentre os habitantes tem %d anos.", maiorid);
    printf("\nDentre os habitantes existem %d mulheres com idade entre 18 e 35 anos, olhos verdes e cabelos louros.", contador);
}