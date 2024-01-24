#include<stdio.h>
int main(){
    int flag=0,num;
    printf("Enter a number: ");
    scanf("%d",&num);

    for(int i=2;i<=num/2;i++)
    {
        if(num%i==0){
            flag=1;
            break;
        }
    }
    if(flag)
    printf("%d is not a prime no",num);

    else
        printf("%d is prime no",num);

    return 0;
}