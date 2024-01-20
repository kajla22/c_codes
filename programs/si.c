#include<stdio.h>
int main(){
    float p,r,t;
    float SI;
    printf("enter principle amount:");
    scanf("%f",&p);
     printf("enter rate:");
    scanf("%f",&r);
     printf("enter time:");
    scanf("%f",&t);

    SI=(p*r*t)/100;
    printf("simple interest is:%f",SI);

    return 0;
}