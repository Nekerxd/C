#include <stdio.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL,"");
    int n1, n2, r1, r2, r3, r4, r5, r6;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);
    r1 = n1 < n2;
    printf("%d < %d = %d \n", n1, n2, r1);
    r2 = n1 > n2;
    printf("%d > %d = %d \n", n1, n2, r2);
    r3 = n1 <= n2;
    printf("%d <= %d = %d \n", n1, n2, r3);
    r4 = n1 >= n2;
    printf("%d >= %d = %d \n", n1, n2, r4);
    r5 = n1 == n2;
    printf("%d == %d = %d \n", n1, n2, r5);
    r6 = n1 != n2;
    printf("%d != %d = %d \n", n1, n2, r6);
}
