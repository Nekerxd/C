#include <stdio.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,"");
    int var1;
    var1= 99;
    while (var1<100)
    {
        printf("Atualmente é %d \n",var1);
        var1++;
    }
    
}