#include<stdio.h>
int main(){
    int n,d,m,i=1;
    printf("Enter table you want to print:");
    scanf("%d",&n);
    printf("Enter the range:");
    scanf("%d",&m);
    while(i<=m){
        d = i * n;
        printf("%dx%d=%d\n",n,i,d);
        i++;
    }
    return 0;
}