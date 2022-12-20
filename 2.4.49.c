#include<stdio.h>

int main(){
//    Program 3 tamsayının çarpımını bulacak.
    int x,y,z,sonuc;
    printf("3 tamsayı girin:\n ");
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    sonuc = x*y*z;
    
    printf("Sonuç = %d", sonuc);
}
