#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "");

    int i = 10, j = 20, temp, *p1, *p2;
    
    p1 = &i;
    p2 = &j;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    printf("%d %d \n", i,j);
}
