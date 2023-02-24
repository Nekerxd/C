#include <stdio.h>
#include <locale.h>

void main()
{
    char continuar;
    int option, size;
    float sizeprice, pizzaprice;
    setlocale(LC_ALL, "");
    continuar = 's'; 

    while (continuar == 's' || continuar == 'S')
    {
        printf("==========| Pizzaria Fornella |=========== \n");
        printf("|\tEste é o cardápio do dia:\t |\n");
        printf("| \t [1] Portuguesa    R$36,00 \t |"
        "\n| \t [2] 4 Queijos     R$42,00 \t |"
        "\n| \t [3] Calabresa     R$45,99 \t |"
        "\n| \t [4] Brigadeiro    R$38,50 \t |\n");
        printf("| \tEscolha uma opção de sabor: ");
        scanf("%d", &option);
        printf("=========| Temos nos tamanhos: |==========\n");
        printf("|        [1] Média\tR$09,99 \t |\n|        [2] Grande\tR$19,99 \t |\n|        [3] Família\tR$29,99 \t |\n");
        printf("| \tEscolha um tamanho de pizza: ");
        scanf("%d", &size);

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
            printf("Tamanho inválido, por favor tente novamente.\n");
        }

        if (option == 1)
        {
            pizzaprice = 36.00;
            printf("A pizza Portuguesa saíra por R$%0.2f \n\n", pizzaprice + sizeprice);
        }
        else if (size == 2)
        {
            pizzaprice = 42.00;
            printf("A pizza de 4 Queijos saíra por R$%0.2f \n\n", pizzaprice + sizeprice);
        }       
        else if (size == 3)
        {
            pizzaprice = 45.99;
            printf("A pizza de Calabresa saíra por R$%0.2f \n\n", pizzaprice + sizeprice);
        }
        else if (size == 4)
        {
            pizzaprice = 38.50;
            printf("A pizza Brigadeiro saíra por R$%0.2f \n\n", pizzaprice + sizeprice);
        }
        else 
        {
            printf("Sabor inválido, por favor tente novamente.\n");
        }
        printf("Tecle [S] para continuar ou [N] para finalizar o programa: ");
        scanf(" %c", &continuar);
        printf("\n");
    }
        printf("\nO programa foi finalizado!");
}