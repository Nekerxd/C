#include <stdio.h>
#include <locale.h>

void main()
{
    int j=0, i=0;
    setlocale(LC_ALL, "");

    struct dados
    {
    int id;
    char title[20];
    float price;
    } func[2][2];

    for (j = 0; j < 2; j++)
    {
        for (i = 0; i < 2; i++)
        {
            printf("Digite o código: ");
            scanf("%d", &func[j][i].id);
            printf("Digite o nome do título: ");
            setbuf(stdin, NULL);
            gets(func[j][i].title);
            printf("Digite o preço: \n");
            scanf("%f", &func[j][i].price);
        }
        
    }
    printf("\nRelatório de cadastro: \n");
    for (j = 0; j < 2; j++)
    {
        for (i = 0; i < 2; i++)
        {
            printf("%d \t %s \t %.1f\n", func[j][i].id, func[j][i].title, func[j][i].price);
        }
    }
    
}