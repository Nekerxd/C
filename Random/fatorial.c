#include <stdio.h>
unsigned long long int fatorial;
int num;

int main(){

    num = 20;

    fat_for( num);
    fat_while( num);
    fat_do( num);
}

int fat_for(int x){
    for (fatorial = 1; x > 1; x--)
        {
            fatorial *= x;
        }
    printf("For: %llu \n", fatorial);
}

int fat_while(int x){
    fatorial = 1;
    while (x > 1)
    {
        fatorial *= x--;
    }
    printf("While: %llu \n", fatorial);
    return 0;
}

int fat_do(int x){
    fatorial = 1;
    do
    {
        if (x != 0)
        {
            fatorial *= x--;
        }
    } while (x > 1);
    
    printf("Do: %llu \n", fatorial);
}
