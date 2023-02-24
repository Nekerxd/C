#include <stdio.h>
#include <stdlib.h>

struct Node{
 int num;
 struct Node *prox;
};
typedef struct Node node;

int tam;

int menu(void);
void inicia(node *stack);
void opcao(node *stack, int op);
void exibe(node *stack);
void libera(node *stack);
void push(node *stack);
node *remove(node *stack);


int main(void)
{
 node *stack = (node *) malloc(sizeof(node));
 if(!stack){
  printf("Sem memoria disponivel!\n");
  exit(1);
 }else{
 inicia(stack);
 int opt;

 do{
  opt=menu();
  opcao(stack,opt);
 }while(opt);

 free(stack);
 return 0;
 }
}

void inicia(node *stack)
{
 stack->prox = NULL;
 tam=0;
}

int menu(void)
{
 int opt;

 printf("Escolha a opcao\n");
 printf("0. Sair\n");
 printf("1. Mostrar\n");
 printf("2. Inserir\n");
 printf("3. Remover\n");
 printf("Opcao: "); scanf("%d", &opt);

 return opt;
}

void opcao(node *stack, int op)
{
 node *tmp;
 switch(op){
  case 0:
   libera(stack);
   break;

  case 1:
   exibe(stack);
   break;

  case 2:
   push(stack);
   break;

  case 3:
   tmp= remove(stack);
   if(tmp != NULL)
   printf("Retirado: %3d\n\n", tmp->num);
   break;

  default:
   printf("Comando invalido\n\n");
 }
}

int vazia(node *stack)
{
 if(stack->prox == NULL)
  return 1;
 else
  return 0;
}

node *aloca()
{
 node *novo=(node *) malloc(sizeof(node));
 if(!novo){
  printf("Sem memoria disponivel!\n");
  exit(1);
 }else{
  printf("Novo elemento: "); scanf("%d", &novo->num);
  return novo;
 }
}


void exibe(node *stack)
{
 if(vazia(stack)){
  printf("stack vazia!\n\n");
  return ;
 }

 node *tmp;
 tmp = stack->prox;
 printf("stack:");
 while( tmp != NULL){
  printf("%5d", tmp->num);
  tmp = tmp->prox;
 }
 printf("\n        ");
 int count;
 for(count=0 ; count < tam ; count++)
  printf("  ^  ");
 printf("\nOrdem:");
 for(count=0 ; count < tam ; count++)
  printf("%5d", count+1);


 printf("\n\n");
}

void libera(node *stack)
{
 if(!vazia(stack)){
  node *proxNode,
     *atual;

  atual = stack->prox;
  while(atual != NULL){
   proxNode = atual->prox;
   free(atual);
   atual = proxNode;
  }
 }
}

void push(node *stack)
{
 node *novo=aloca();
 novo->prox = NULL;

 if(vazia(stack))
  stack->prox=novo;
 else{
  node *tmp = stack->prox;

  while(tmp->prox != NULL)
   tmp = tmp->prox;

  tmp->prox = novo;
 }
 tam++;
}


node *remove(node *stack)
{
 if(stack->prox == NULL){
  printf("stack ja vazia\n\n");
  return NULL;
 }else{
  node *ultimo = stack->prox,
              *penultimo = stack;

  while(ultimo->prox != NULL){
   penultimo = ultimo;
   ultimo = ultimo->prox;
  }

  penultimo->prox = NULL;
  tam--;
  return ultimo;
 }
}