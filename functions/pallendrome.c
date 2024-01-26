#include<stdio.h>
void pallendrome(int);
int main(){
    int n;
    printf("Enter a no:");
    scanf("%d",&n);
   pallendrome(n);

   return 0;
}

void pallendrome(int n){
    int num=n,rev=0;
    while(n!=0){
        rev=rev*10+n%10;
        n=n/10;
    }
    if(rev==num){
        printf("%d is pallendrome",num);
    }
    else{
        printf("%d is not pallendrome",num);
    }
}