#include<stdio.h>

int main(){
    int a;
    printf("Sayı girin: ");
    scanf("%d", &a);
    printf("%d   %d   %d   %d   %d", a/10000, (a%(a/10000*10000))/1000, ((a-(a/1000*1000)-(a%10))/10-(a-(a/100*100)-(a%10))/10)/10, (a-(a/100*100)-(a%10))/10, a%10);
}
