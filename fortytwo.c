#include<stdio.h>

int main() {
    int sayi1 = 0;
    int sayi2 = 0;
    printf("1. sayıyı girin: ");
    scanf("%d", &sayi1);
    printf("2. sayıyı girin: ");
    scanf("%d", &sayi2);
    
    if(sayi1 < sayi2)
        printf("1. sayı 2.den küçük.");
    else if(sayi1 > sayi2)
        printf("1. sayı 2.den büyük.");
    else if(sayi1 == sayi2)
        printf("1. sayı 2.yle eşit.");
    
    return 0;
}
