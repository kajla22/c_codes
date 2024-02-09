#include<stdio.h>
int minimum(int a[],int n)
{
    int m=a[0];
    for(int i=0;i<n;i++)
    {
        if(m>a[i]){
        m = a[i];
        }
    }
    return m;
}
int main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    int a[n];
    printf("Enter %d elements in array:",n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int result=minimum(a,n);
    printf("Minimum element is %d",result);
    return 0;
    
}
