#include<stdio.h>
int main(){
    int n,sum=0;
    printf("no of natural no:");
    scanf("%d",&n);
    if(n==0)
    {
        printf("0 is not a natural no");
    }
    else
    {
        for(int i=1;i<n;i++)
        {
            sum=sum+i;
        }
    }
    printf("%d",sum);
    return 0;
}