#include<stdio.h>

int main(){
    int a,b;
    scanf("%d\n", &a);
    scanf("%d", &b);
    
    if(a < b)
        printf("B(ikinci) en büyüktür.");
    else if(a > b)
        printf("A(birinci) en büyüktür.");
    else
        printf("Eşittir.");
}
