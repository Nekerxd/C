#include <stdio.h>
#include <locale.h>
#include <pthread.h>

// Função para classificar um triângulo em equilátero, escaleno e isósceles.
void * triangulo(void *arg){
    int *argument = (int *)(arg);
    int a, b, c;
    a = argument[0]; b = argument[1]; c = argument[2];
    printf("\nO triângulo de lados A, B e C, ");
    if (a == b && a == c)
        printf("possui todos os lados iguais, logo é um triângulo equilátero\n");
    else if (a != b && a != c && b != c)
        printf("possui todos os lados diferentes, logo é um triângulo escaleno.\n");
    else
        printf("possui dois lados iguais, logo é um triângulo isósceles.\n");
    return NULL;
}

// Função para determinar a fatorial de um número.
void * fatorial(void *arg){
    int *argument = (int *)(arg);
    unsigned long int fat;
    int x = *argument;
    for (fat = 1; x > 1; x--)
        {
            fat *= x;
        }
    printf("\n O fatorial de %d é : %lu \n", *argument, fat);
    return NULL;
}

// Função para converter dias para o formato anos, meses e dias.
void * idade_conv(void *arg){
    int *idade = (int *)(arg);
    int anos, meses, dias;
    anos = *idade / 365;
    meses = (*idade % 365) / 30;
    dias = (*idade % 365) % 30;
    printf("\nSua idade é igual a %d , %d meses e %d dias.\n", anos, meses, dias);
    return NULL;
}

// Função para organizar vetor em ordem crescente
void * crescente(void *arg){
    int *vetor = (int *)(arg);
    int i, j, temp;
    printf("\nVetor em ordem crescente:\n");
    for (i = 0; i < 2; i++) {
        for (j = i + 1; j < 3; j++) {
            if (vetor[i] > vetor[j]) {
                temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }
    for (i = 0; i < 3; i++) {
        printf("[%d] ", vetor[i]);
    }
    return NULL;
}

// Função para determinar se determinado número é primo ou não.
void * primo(void *arg){
    int *vetor = (int *)(arg);
    int i, j, k;
    for (j = 0; j < 3; j++) {
        k = 0;
        for (i = 1; i <= vetor[j]; i++) {
            if (vetor[j] % i == 0)
                k++;
        }
        if (k == 2)
            printf("\n%d é primo\n", vetor[j]);
        else
            printf("\n%d não é primo\n", vetor[j]); 
    }
    return NULL;
}

int main(){
    setlocale(LC_ALL, "");
    int num, dias, abc[3];
    
    printf("\nInsira os valores para A, B e C:\n");
    scanf("%d %d %d", &abc[0], &abc[1], &abc[2]);
    printf("\nInsira a sua idade em dias: ");
    scanf("%d", &dias);
    printf("\nInsira um número para fatorial: ");
    scanf("%d", &num);
    
    //Declarando minhas threads.
    pthread_t tid_1, tid_2, tid_3, tid_4, tid_5;
    //Iniciando a thread, definindo qual função ela executará e passando um valor como parâmetro.
    pthread_create(&tid_1, NULL, triangulo, (void *)(&abc));
    pthread_create(&tid_2, NULL, fatorial, (void *)(&num));
    pthread_create(&tid_3, NULL, idade_conv, (void *)(&dias));
    pthread_create(&tid_4, NULL, crescente, (void *)(&abc));
    pthread_create(&tid_5, NULL, primo, (void *)(&abc));
    //Join para finalizar a thread antes de finalizar a main().
    pthread_join(tid_1, NULL);
    pthread_join(tid_2, NULL);
    pthread_join(tid_3, NULL);
    pthread_join(tid_4, NULL);
    pthread_join(tid_5, NULL);
}