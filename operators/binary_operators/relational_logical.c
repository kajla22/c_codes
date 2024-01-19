#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    
    if(a!=b)
        printf("a is not equal to b\n");
    if(a<b&&a<=b)
       printf("b is greater\n");
    else if(a>b&&a>=b)
        printf("a is greater\n");
    else
        printf("a is  equal to b");

    printf("value is:%d",!(a>b));

    return 0;
}