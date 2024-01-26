#include<stdio.h>
int fibonacci(int);
int main(){
    int n;
    printf("Enter no.:");
    scanf("%d",&n);

    printf("Fibonacci series:");
    for(int i=0;i<n;i++)
    printf("%d,",fibonacci(i));
    return 0;
}
int fibonacci(int n)
{
    if(n<=1)
    {
        return n;
    }
        return fibonacci(n-1)+fibonacci(n-2);
}