#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the va;ue of b: ");
    scanf("%d",&b);

    a>b?printf("%d",a):printf("%d",b);
    return 0;
}