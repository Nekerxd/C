#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "");
    int a, *pa;
    a = 32;
    pa = &a;
    *pa = 20;
}
