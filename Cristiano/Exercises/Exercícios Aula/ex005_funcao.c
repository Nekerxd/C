/* Crie as funções, chame-as a partir da main(): Imprimir seu nome na função/proced; Pedir a idade e retornar(imprimir na main); Chame a função, passe 2 valores inteiros, retorne o maior; Chame a função que recebe um float e imprima a parte fracionada; */

#include <stdio.h>
#include <locale.h>

void name(){
    char p_name[50];

    printf("Insira o seu nome: ");
    setbuf(stdin, NULL);
    gets(p_name);
    printf("Seu nome é %s\n", p_name);

}

int age(){
    int idade;
    printf("Insira a sua idade: ");
    scanf("%d", &idade);
    return idade;
}

int maior(int a, int b){
    int maior_num;
    if (a > b)
        maior_num = a;
    else
        maior_num = b;
    
    return maior_num;
}

void fracionada(float flut){
    int num_int; float num_frac;
    num_int = flut;
    num_frac = flut - num_int;
    printf("A parte fracionada de %.2f é %.2f.\n", flut, num_frac);
}

int main(){
    setlocale(LC_ALL, "");
    int num1,num2;
    char nome;
    float num_qbd;

    printf("Insira um número fracionado: ");
    scanf("%f", &num_qbd);
    printf("Insira dois valores para A e B: ");
    scanf("%d %d", &num1, &num2);

    name();
    printf("A sua idade é %d\n",age());
    printf("O maior número é %d\n", maior(num1, num2));
    fracionada(num_qbd);
}