//Uma empresa decidiu dar uma gratificação de Natal aos seus funcionários, baseada no número de horas extras e no número de horas que o funcionário faltou ao trabalho. O valor do prêmio é obtido pela consulta na tabela a seguir, em que: H = (número de horas extras) - (2/3 * (número de horas-falta))
//  H (minutos)     Prêmio ($)
//    >2400           500
//  1800-2400         400
//  1200-1800         300
//  600 -1200         200
//   <= 600           100

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int h_extras, h_falta, minutos;
    float premio;

    printf("Insira a quantidade de horas extras: ");
    scanf("%d", &h_extras);
    printf("Insira a quantidade de horas faltas: ");
    scanf("%d", &h_falta);

    minutos = (h_extras*60) - ((2.0/3.0) * (h_falta*60));

    if (minutos > 2400)
        premio = 500;
    else if(minutos > 1799 && minutos < 2401)
        premio = 400;
    else if(minutos < 1801 && minutos > 1199)
        premio = 300;
    else if (minutos <1201 && minutos > 600)
        premio = 200;
    else
        premio = 100;
    printf("O valor do pr?mio obtido ? de R$%.2f", premio);
}
