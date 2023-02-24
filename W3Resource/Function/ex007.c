// Write a program in C to check whether a number is a prime number or not using the function.

#include <stdio.h>
#include <locale.h>

int cont = 0, i = 1;

int primo2();

int main(){
    setlocale(LC_ALL, "");
    int num;

    printf("Insira um número: ");
    scanf("%d", &num);
    primo2(num) == 2 ? printf("Primo.") : printf("Não é primo.");
}

// int primo(int x){
//     int i, cont;
//     for (i = 1; i < x; i++){
//         if (x % i == 0)
//             cont++;
//     }
//     return cont;
// }

int primo2(int x){
    if (x % i == 0)
        cont++;
    if (i == x)
        return cont;
    i++;
    primo2(x);
}