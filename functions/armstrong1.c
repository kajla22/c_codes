#include<stdio.h>
#include<math.h>
int armstrong(int,int);
int main(){
    int n,o,result;
    printf("Enter order:");
    scanf("%d",&o);
    printf("Enter no.:");
    scanf("%d",&n); 
    result=armstrong(n,o);
    if(result==n)
        printf("%d is armstrong no",n);

    else
        printf("%d is not armstrong no",n);

    return 0;
}
int armstrong(int num,int o)
{
    int temp,sum=0;
    for(int i=0;i<o;i++){
        temp=num%10;
        sum+=pow(temp,o);
        num/=10;
    }
    return sum;

}