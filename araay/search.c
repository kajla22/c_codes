#include<stdio.h>
void search(int a[],int n)
{
    int b;
    printf( "Enter the number you want to search:");
    scanf("%d",&b);

    for(int i=0;i<n;i++){
        if(b==a[i])
        {
            printf("%d is found at %d",b,i+1);
        }
    }
}
int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Emter %d elements of array",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    search(a,n);

    return 0;
}