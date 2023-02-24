#include <stdlib.h>
#include <stdio.h>

struct tipoNodo{
    int info;
    struct tipoNodo *elo;
};

typedef struct tipoNodo TipoNodo;

//Protótipos
int menu(void);
int insereIni(TipoNodo **ptlista, int dados);
void mostra(TipoNodo *ptlista);

int main()
{
    TipoNodo *ptlista;
    int dados,op,sucesso;
    ptlista = NULL; //Criação de Uma Lista Linear Encadeada

    do
    {
        op=menu();
        switch(op)
        {
            case 1:
                printf("Digite um número: ");
                scanf("%d",&dados);
                sucesso = insereIni(&ptlista,dados);
                if(sucesso== 0)
                    printf("\nDeu certo!!!\n");
                else
                    printf("\nErro!!!\n");
                break;
            case 2:
                mostra(ptlista);
                break;
            default:
                if(op!=0)
                {
                    printf("\nOpcao invalida!!!\n");
                }
        }
    }while(op!=0);
}

int menu(void)
{
    int op;
    printf("\n\t\t\t*--------- MENU ---------*");
    printf("\n\t\t\t|  [1] Inserir Inicio    |");
    printf("\n\t\t\t|  [2] Mostrar           |");
    printf("\n\t\t\t|  [0] Sair              |");
    printf("\n\t\t\t*------------------------*\n");
    printf("\nDigite uma opcao: ");
    scanf("%d",&op);
    return op;
}

//Inserção no início da lista encadeada
int insereIni(TipoNodo **ptlista, int dados)
{
    TipoNodo* ptNovo = (TipoNodo*) malloc(sizeof(TipoNodo));
    if  (ptNovo == NULL)
        return 1;
    else
    {
        ptNovo->info=dados;
        ptNovo->elo=*ptlista; 
        *ptlista = ptNovo;
        return 0;
    }
}
//Mostra LLE
void mostra(TipoNodo *ptlista)
{
    TipoNodo *p;
    for( p = ptlista; p != NULL; p = p->elo)
        printf("%d\t",p->info);
}
