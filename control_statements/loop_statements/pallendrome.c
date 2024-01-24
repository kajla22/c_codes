#include<stdio.h>
int main(){
    long int num,n,rev=0;
    printf("Enter a no:");
    scanf("%ld",&num);
    n=num;
    while(num!=0)
    {
        rev=(rev*10)+(num%10);
        num=num/10;
    }
    if(rev==n)
        printf("%d is a pallendrome",n);
    
    else
        printf("%d is not a pallendrome",n);

    return 0;
}