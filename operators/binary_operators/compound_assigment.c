#include<stdio.h>
int main(){
    float a,b;
    printf("Enter the value of a:\n ");
    scanf("%f",&a);
    printf("Enter the value of b: \n");
    scanf("%f",&b);
    
    printf("addition is:%f\n",a+=b);
    printf("subtraction is:%f\n",a-=b);
    printf("multiplication is:%f\n",a*=b);

    if(b==0)
        printf("division is not possible");
    else
        printf("division is:%f\n",a/=b);
    int x=a;
    int y=b;
    printf("modulus is:%d\n",x%=y);
    
    return 0;

}