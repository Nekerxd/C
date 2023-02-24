#include <stdio.h>
#include <locale.h>

void main()
{
    int v[3][3][4] = {3, 8, 1, 5, 0, 2, 4, 7, 2, 5, 9, 3,
                      7, 3, 0, 2, 5, 1, 9, 4, 6, 9, 1, 5,
                      6, 3, 8, 1, 2, 3, 5, 2, 8, 4, 0, 3};
    setlocale(LC_ALL, "");
    
    printf("número[0][0][0] = %d \n", v[0][0][0]);
    printf("número[1][2][1] = %d \n", v[1][2][1]);
    printf("número[2][1][3] = %d \n", v[2][1][3]);
}