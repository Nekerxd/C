#include <stdio.h>
#include <locale.h>

int calcFat();
long calcFatRec();

int main(){

    setlocale(LC_ALL, "");
    int num;
    long fatorial;

    printf("Digite um número: ");
    scanf("%d", &num);

    fatorial = calcFatRec(num);
    printf("Fatorial: %ld\n", fatorial);
}

int calcFat(int num){
    int i;
    long fatorial=1;
    for (i = abs(num); i > 1; i--){
        fatorial*=i;
    }
    return fatorial;
}

long calcFatRec(int num){
    if (num == 0)
        return 1;
    else
        return num*(calcFatRec(num-1));
}