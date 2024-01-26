#include<stdio.h>
int factorial(int);
int main(){
    int n;
    printf("Enter a no:");
    scanf("%d",&n);

    int result=factorial(n);
    printf("Factorial of %d = %d",n,result);
    return 0;
}

int factorial(int n){
    int f=1;
    if(n==0)
    {
        printf("factorial of 0 is 0");
    }
    else{
        for(int i=1;i<=n;i++){
            f=f*i;
        }
    }
    return f;
}