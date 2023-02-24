#include <stdio.h>
#include <locale.h>

void main(){
    
    setlocale(LC_ALL,"");
    int var1;
    for (var1 = 1;var1<10;var1++);
    {
        printf("%d", &var1);
    }
    
}
