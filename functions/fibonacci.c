#include<stdio.h>
void fibonacci(int);
int main(){
    int n;
    printf("enter times :");
    scanf("%d",&n);

    fibonacci(n);
    return 0;
}

void fibonacci(int n){
    int a = 0, b=1 , c ,i;
    printf("%d %d ",a,b);
     for(i=0;i<n;i++){
    if (i<=1){
        c=i;
        } 
        else{
            c=a+b;
            a=b;
            b=c;
            printf("%d ",c);  
            }
     }
}
