#include<stdio.h>

int main(){
    int a,b;
    printf("İki sayı gir: ");
    scanf("%d", &a);
    scanf("%d", &b);
    
    printf("a+b = %d\n", a+b);
    printf("a.b = %d\n", a*b);
    printf("a-b = %d\n", a-b);
    printf("a/b = %d\n", a/b);
    printf("a%b = %d\n", a%b);
}
