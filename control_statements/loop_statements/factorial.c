#include<stdio.h>
int main(){
    int f=1,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        f*=i;
    }
    printf("Factorial of %d is %d",n,f);
    return 0;
}