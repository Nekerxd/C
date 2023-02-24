// 5. Tendo como dados de entrada a altura e o sexo de uma pessoa (?M? masculino e ?F? feminino), construa um algoritmo que calcule seu peso ideal, utilizando as seguintes fÃ³rmulas:
// - para homens: (72.7*h)-58
// - para mulheres: (62.1*h)-44.7

#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");
    int h;
    float peso_ideal;
    char sexo;
    
    printf("Insira a sua altura em centímetros: ");
    scanf("%d", &h);
    printf("Insira seu sexo [M/F]: ");
    scanf(" %c", &sexo);

    if (sexo == 'F' || sexo == 'f'){
        peso_ideal = 62.1 * h * 0.01 - 44.7;}
    else if (sexo == 'M' || sexo == 'm'){
        peso_ideal = 72.7 * h * 0.01 - 58;}
    else { printf("Sexo inválido!");}
    printf("Sendo do sexo %c com %dcm de altura, o seu peso ideal é de %.2fKg!", sexo, h, peso_ideal);
}