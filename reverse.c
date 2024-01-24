#include<stdio.h>
int main(){
    int num,rev=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    int n=num;
    do{
        rev=rev*10+num%10;
        num/=10;
    }
    while(num!=0);

    printf("reverse of %d is %d",n,rev);

    return 0;
}