#include<stdio.h>
#include<math.h>
#define pi 3.14159

int main(){
    float r;
    scanf("%f", &r);
    printf("Çap: %f\n", 2*r);
    printf("Çevre: %f\n", 2*r*pi);
    printf("Alan: %f", pi*pow(r, 2));
}
