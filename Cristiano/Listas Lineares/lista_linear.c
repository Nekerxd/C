#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
#define N 10

struct TipoNodo{
    int codigo;
    char nome[30];
    float altura;
};

typedef struct TipoNodo TipoNodo;

void iniciaLista(int *IL, int *FL, int IA);
void preencherNodo(TipoNodo *infoNodo);
int insertInicio(TipoNodo LL[], int *FL, int *IL, int IA, int FA, TipoNodo infoNodo);
int insertMeio(TipoNodo LL[], int *FL, int *IL, int IA, int FA, int K, TipoNodo infoNodo);
int insertFim(TipoNodo LL[], int *FL, int *IL, int IA, int FA, TipoNodo infoNodo);
int removerNodo(TipoNodo LL[], int *FL, int *IL, int K);
void exibirLista(TipoNodo LL[], int IL, int FL);
void buscarLista(TipoNodo LL[], int *FL, int *IL, int valBuscar);



int main(){
    setlocale(LC_ALL, "");

    TipoNodo LL[N], infoNodo;
    int IA, FA, IL, FL, op, K, valBuscar;

    IA = 0;
    FA = N - 1;
    op = 1;

    iniciaLista(&IL, &FL, IA);

    while (op > 0 && op < 8){
        printf("\n\n====== Lista Linear Sequencial ======\n\n"
        "Escolha uma das seguintes opções: \n"
        "[1] Limpar lista\n"
        "[2] Inserir no início\n"
        "[3] Inserir em uma posição\n"
        "[4] Inserir ao fim\n"
        "[5] Exibir lista\n"
        "[6] Remover nodo\n"
        "[7] Encontrar na lista\n"
        "[8] Encerrar lista\n:");
        scanf("%d", &op);

        switch (op){
        case 1:
            iniciaLista(&IL, &FL, IA);
            break;
        case 2:
            preencherNodo(&infoNodo);
            insertInicio(LL, &FL, &IL, IA, FA, infoNodo);
            break;
        case 3:
            printf("\nPosição da lista para inserção: ");
            scanf("%d", &K);
            preencherNodo(&infoNodo);
            insertMeio(LL, &FL, &IL, IA, FA, K, infoNodo);
            break;
        case 4:
            preencherNodo(&infoNodo);
            insertFim(LL, &FL, &IL, IA, FA, infoNodo);
            break;
        case 5:
            printf("A sua lista atualmente é: \n");
            exibirLista(LL, IL, FL);
            break;
        case 6:
            printf("\nPosi??o da lista para remoção: ");
            scanf("%d", &K);
            removerNodo(LL, &FL, &IL, K);
            break;
        case 7:
            printf("\nInsira o código para a busca: ");
            scanf("%d", &valBuscar);
            buscarLista(LL, &FL, &IL, valBuscar);
            break;
        default:
            printf("Lista encerrada!");
            break;
        }
    }
}

void iniciaLista(int *IL, int *FL, int IA){
    *IL = *FL = IA - 1;
}

void preencherNodo(TipoNodo *infoNodo){
    printf("\nInsira o código: ");
    scanf("%d", &infoNodo->codigo);
    printf("\nInsira o nome: ");
    scanf(" %s", &infoNodo->nome);
    printf("\nInsira a altura: ");
    scanf("%f", &infoNodo->altura);
}

int insertInicio(TipoNodo LL[], int *FL, int *IL, int IA, int FA, TipoNodo infoNodo){
    int i;
    if ((IA == *IL) && (FA == *FL))
        return 1;
    else{
            if (*IL == -1)
                *IL = *FL = IA;
            else if (*IL > IA)
                *IL -= 1;
            else{
                for (i = *FL; i >= *IL; i--){
                    LL[i+1] = LL[i];
                }
                *FL += 1;
            }
        LL[*IL] = infoNodo;
        return 0;
    }
}

int insertMeio(TipoNodo LL[], int *FL, int *IL, int IA, int FA, int K, TipoNodo infoNodo){
    int i;
    if (((IA == *IL) && (FA == *FL)) || (K > *FL - *IL + 2) || (K <= 0) || (K > FA))
        return 1;
    else 
    {
        if (*IL == -1)
            *IL = *FL = (FA+1)/2;
        else if ((*IL == IA) || ((*FL < FA) && (K > (*FL - *IL + 2 / 2)))){
            for (i = *FL; i >= (*IL+K-1); i--){
                LL[i+1] = LL[i];
            }
            *FL +=1;
        }
        else {
            for (i = *IL; i <= (*IL+K-1); i++){
                LL[i-1] = LL[i];
            }
            *IL -= 1;
            K += 1;
        }
        LL[*IL+K-1] = infoNodo;
        return 0;
    }
}

int insertFim(TipoNodo LL[], int *FL, int *IL, int IA, int FA, TipoNodo infoNodo){
    int i;
    if ((IA = *IL) && (FA = *FL)) 
        return 1;
    else{
        if (*IL == -1)
            *IL = *FL = IA;
        else if (*FL < FA)
            *FL += 1;
        else{
            for (i = *IL; i <= *FL; i++){
                LL[i-1] = LL[i];
            }
            *IL -= 1;
        }
        LL[*FL] = infoNodo;
        return 0;
    } 
}

int removerNodo(TipoNodo LL[], int *FL, int *IL, int K){
    int i;
    if ((K <= 0) || (K > *FL - *IL + 1))
        return 1;
    else
    {
        for (i = (*IL+K-1); i <= *FL; i++){
            LL[i] = LL[i+1];
        }
        *FL -= 1;
        if (*FL == *IL - 1)
            *IL = *FL = 0;
        return 0;
    }
}

void exibirLista(TipoNodo LL[], int IL, int FL){
    int i;
    if (IL == -1)
        printf("\nLista vazia!");
    else{
        for (i = IL; i <= FL; i++){
            printf("[%d] [%.2f] [%s]\n", LL[i].codigo, LL[i].altura, LL[i].nome);
        }
    }
}

void buscarLista(TipoNodo LL[], int *FL, int *IL, int valBuscar){
    bool achou = false;
    int pos = -1, i = *IL;
    
    while ((i <= *FL) && (!achou)){
        if (LL[i].codigo == valBuscar){
            pos = i;
            achou = true;
        }
        else 
            i += 1;
    }
    if (pos != -1)
        printf("O código foi encontrado na posição %d da lista!", pos+1);
    else
        printf("\nCódigo não encontrado!\n");
}
