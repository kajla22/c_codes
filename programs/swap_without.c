#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two no:");
    scanf("%d%d",&a,&b);
    printf("No before swap is a=%d,b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
     printf("No after swap is a=%d,b=%d\n",a,b);
    return 0;
}