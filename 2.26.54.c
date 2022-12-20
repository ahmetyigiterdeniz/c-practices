#include<stdio.h>

int main ()
{
    int a,b;
    scanf("%d %d", &a, &b);
    if(a%b==0)
        printf("Sayı %d'nin katıdır.", b);
    else
        printf("Sayı %d'nin katı değildir.", b);
}
