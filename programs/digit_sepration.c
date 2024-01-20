#include<stdio.h>
int main(){
    float x;
    
    printf("Enter a real no:");
    scanf("%f",&x);
    int a=x;
    
    float y=x-a;
    printf("Integer part is %d\n",a);
    printf("Decimal part is %.4f\n",y);

    return 0;
}