#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter two no:");
    scanf("%d%d",&a,&b);
    printf("No before swap is a=%d,b=%d\n",a,b);
    temp=a;
    a=b;
    b=temp;

    printf("No after swap is a=%d,b=%d",a,b);
    return 0;
}