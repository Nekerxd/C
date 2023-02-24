#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int num1, num2;
    char operation;

    printf("Digite a operação desejada: ");
    scanf("%d %c %d", &num1, &operation, &num2);

    switch (operation){
        case '+':
            printf(" = %d\n",(num1 + num2));
            break;
        case '-':
            printf(" = %d\n",(num1 - num2));
            break;
        case '*':
            printf(" = %d\n",(num1 * num2));
            break;
        case '/':
            printf(" = %f\n",(float)num1 / num2);
            break;
        default:
            printf("\nOperação inválida!");
    }
}