#include<stdio.h>
int main(){
    int a[10];
    printf("Enter elements of array\n");
    for(int i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    printf("Elements of array are:");
    for(int i=0;i<10;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}