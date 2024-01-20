#include<stdio.h>
int main(){
    float a,b,c;
    printf("Enter three no:");
    scanf("%f%f%f",&a,&b,&c);

    if(a>b&&a>c)
        printf("a is greater");
    else if(b>c&&b>a)
        printf("b is greater");
    else
        printf("c is greater");

    return 0;

}