#include <stdio.h>
#include <locale.h>

void main()
{
    int option, size;
    float sizeprice, pizzaprice;
    setlocale(LC_ALL, "");

    printf("=======| Pizzaria Fornella |======= \n");
    printf("|  Olá o nosso cardápio do dia é: |\n");
    printf("|    [1] Portuguesa    R$36,00    |\n|    [2] 4 Queijos     R$42,00    |\n|    [3] Calabresa     R$45,99    |\n|    [4] Brigadeiro    R$38,50    |\n");
    printf("|   Escolha uma opção de sabor: ");
    scanf("%d", &option);
    printf("======| Temos nos tamanhos: |======\n");
    printf("|            [1] Média            |\n|            [2] Grande           |\n|            [3] Família          |\n");
    printf("|   Escolha um tamanho de pizza: ");
    scanf("%d", &size);

    switch (option)
    {
    case 1:
        pizzaprice = 36.00;
        if (size == 1)
        {
            printf("\nO tamanho será Média \n");
            sizeprice = 9.99;
        }
        else if (size == 2)
        {
            printf("\nO tamanho será Grande \n");
            sizeprice = 19.99;
        }       
        else if (size == 3)
        {
            printf("\nO tamanho será Família \n");
            sizeprice = 29.99;
        }
        else 
        {
            printf("Tamanho ou sabor inválido, tente novamente.");
            break;
        }
        printf("A pizza Portuguesa saíra por R$%0.2f", pizzaprice + sizeprice);
        break;
    
    case 2:
        pizzaprice = 42.00;
        if (size == 1)
        {
            printf("\nO tamanho será Média \n");
            sizeprice = 9.99;
        }
        else if (size == 2)
        {
            printf("\nO tamanho será Grande \n");
            sizeprice = 19.99;
        }      
        else if (size == 3)
        {
            printf("\nO tamanho será Família \n");
            sizeprice = 29.99;
        }
        else
        {
            printf("Tamanho ou sabor inválido, tente novamente.");
            break;
        }
        printf("A pizza de 4 Queijos saíra por R$%0.2f", pizzaprice + sizeprice);
        break;
    
    case 3:
        pizzaprice = 45.99;
        if (size == 1)
        {
            printf("\nO tamanho será Média \n");
            sizeprice = 9.99;
        }
        else if (size == 2)
        {
            printf("\nO tamanho será Grande \n");
            sizeprice = 19.99;
        }    
        else if (size == 3)
        {
            printf("\nO tamanho será Família \n");
            sizeprice = 29.99;
        }
        else 
        {
            printf("Tamanho ou sabor inválido, tente novamente.");
            break;
        }
        printf("A pizza de Calabresa saíra por R$%0.2f", pizzaprice + sizeprice);
        break;

    case 4:
        pizzaprice = 38.50;
        if (size == 1)
        {
            printf("\nO tamanho será Média \n");
            sizeprice = 9.99;
        }
        else if (size == 2)
        {
            printf("\nO tamanho será Grande \n");
            sizeprice = 19.99;
        }    
        else if (size == 3)
        {
            printf("\nO tamanho será Família \n");
            sizeprice = 29.99;
        }
        else 
        {
            printf("Tamanho ou sabor inválido, tente novamente.");
            break;
        }
        printf("A pizza Brigadeiro saíra por R$%0.2f", pizzaprice + sizeprice);
        break;

    default:
        printf("Tamanho ou sabor inválido, tente novamente.");
        break;
    
    }
}