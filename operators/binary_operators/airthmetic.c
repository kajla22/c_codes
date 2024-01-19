#include<stdio.h>
float add(float x,float y){
    return x+y;
}
float sub(float x,float y){
    return x-y;
}
float mul(float x,float y){
    return x*y;
}
float div(float x,float y){
     return x/y;
}
int mod(int x,int y){
    return x%y;
}
int main(){
    int a,b;
    printf("Enter first no.:\n");
    scanf("%d",&a);
    printf("Enter second no.:\n");
    scanf("%d",&b);
    
        printf("addition is:%f\n",add(a,b));
        printf("subtraction is:%f\n",sub(a,b));
        printf("multiplication is:%f\n",mul(a,b));
        if(b==0)
             printf("division is not possible");
        else
             printf("division is:%f\n",div(a,b));
        
        printf("modulus is:%d\n",mod(a,b));
    return 0;
}