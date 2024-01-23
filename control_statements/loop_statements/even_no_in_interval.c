#include<stdio.h>
int main(){
    int n,m;
    printf("enter first no.:");
    scanf("%d",&n);
    printf("enter second no.:");
    scanf("%d",&m);

    for(int i=n;i<m;i++)
    {
        if(i%2==0)
        {
            printf("%d,",i);
        }
    }
    return 0;
}