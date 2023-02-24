#include <stdio.h>
#include <locale.h>
#include <math.h>

void IntervaloProp(float N, float P, float Sucesso, float EP, float CritVal, float ICP[]);
void IntervaloMedia(float N, float DP, float Media, float EM, float CritVal, float ICM[]);
void AmostraProp(float N, float P, float EP, float CritVal);
void AmostraMedia(float N, float DP, float EM, float CritVal);

int main(){
    setlocale(LC_ALL, "");
    int Confi, op1 = 1, op2;
    float Alfa, N, CritVal, Media, Sucesso, EM, EP, DP, P, ICM[2], ICP[2];
    
    while (op1 != 2){

        printf("\n[1] Intervalo de confiança da Proporção"
        "\n[2] Intervalo de confiança da Média"
        "\n[3] Tamanho da amostra da Proporção"
        "\n[4] Tamanho da amostra da Média"
        "\nQual a fórmula desejada: ");
        scanf("%d", &op2);

        Confi = 1;
        if (op2 > 0 && op2 < 5){
            while (Confi != 99 && Confi != 95 && Confi != 90){
                printf("\nQual o grau de confiança? (Em porcentagem): ");
                scanf("%d", &Confi);
            }

            CritVal = (Confi == 99 ? 2.575 : Confi == 95 ? 1.96 : 1.6450);
            
            switch (op2)
            {
            case 1:
                IntervaloProp(N, P, Sucesso, EP, CritVal, ICP);
                break;
            case 2:
                IntervaloMedia(N, DP, Media, EM, CritVal, ICM);
                break;
            case 3:
                AmostraProp(N, P, EP, CritVal);
                break;
            case 4:
                AmostraMedia(N, DP, EM, CritVal);
                break;
            }

            printf("\nDeseja calcular novamente?"
            "\n[1] Sim"
            "\n[2] Não\n: ");
            scanf("%d", &op1);
            if (op1 == 2) printf("\nPrograma finalizado!");
        }
    }
}

void IntervaloProp(float N, float P, float Sucesso, float EP, float CritVal, float ICP[]){
    int escolha = 0;
    
    printf("\nInsira o tamanho da amostra: ");
    scanf("%f", &N);

    while (escolha != 1 && escolha != 2){
        printf("\n[1] Inserir a proporção da amostra (P)"
        "\n[2] Calcular proporção da amostra (P)\n:");
        scanf("%d", &escolha);  
    }
    
    switch (escolha)
    {
    case 1:
        printf("\nInsira a proporção da amostra: ");
        scanf("%f", &P);
        P = (P == 0 ? 0.5 : P);
        break;
    case 2:
        printf("\nInsira o número de sucesso:");
        scanf("%f", &Sucesso);
        P = Sucesso / N;
        break;
    }

    EP = (CritVal * sqrt((P * (1-P)/N)));
    ICP[0] = P - EP; ICP[1] = P + EP;

    printf("\nErro amostral da proporção (EP) = %.2f"
    "\nIntervalo de confiança da proporção (IC) = (%.2f ; %.2f)\n", EP, ICP[0], ICP[1]);
}

void IntervaloMedia(float N, float DP, float Media, float EM, float CritVal, float ICM[]){
    printf("\nInsira o desvio padrão: ");
    scanf("%f", &DP);
        
    printf("\nInsira o tamanho da amostra: ");
    scanf("%f", &N);

    printf("\nInsira a média: ");
    scanf("%f", &Media);

    EM = (CritVal * (DP / sqrt(N)));
    ICM[0] = Media - EM; ICM[1] = Media + EM;

    printf("\nErro amostral da média (Em) = %.2f"
    "\nIntervalo de confiança da média (IC) = (%.2f ; %.2f)\n", EM, ICM[0], ICM[1]);
}

void AmostraProp(float N, float P, float EP, float CritVal){
    printf("\nInsira a proporção da amostra: ");
    scanf("%f", &P);

    printf("\nInsira o erro amostral da proporção: ");
    scanf("%f", &EP);

    N = ((pow(CritVal, 2) * P * (1-P)) / pow(EP, 2));
    N = ceil(N);

    printf("\nO tamanho da amostra deve ser no mínimo %0.f\n", N);
}

void AmostraMedia(float N, float DP, float EM, float CritVal){
    printf("\nInsira o desvio padrão: ");
    scanf("%f", &DP);

    printf("\nInsira o erro amostral da proporção: ");
    scanf("%f", &EM);

    N = (pow((CritVal * DP / EM), 2));
    N = ceil(N);

    printf("\nO tamanho da amostra deve ser no mínimo %0.f\n", N);
}