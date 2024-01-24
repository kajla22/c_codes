#include<stdio.h>
#include<math.h>
int main(){
    int n,o,num,sum=0;
    printf("Enter the order of a no:");
    scanf("%d",&o);
    
    printf("Enter a no:");
    scanf("%d",&n);
    int temp=n;
    for(int i=0;i<o;i++){
        num=temp%10;
        sum+=pow(num,o);
        temp=temp/10;
    }
    if(sum==n)
    {
        printf("%d is armstrong no",n);
    }
    else
        printf("%d is not a armstrong",n);

return 0;
}