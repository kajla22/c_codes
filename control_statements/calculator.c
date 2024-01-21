#include<stdio.h>
int main(){
    char c;
    printf("Enter your choice between +,-,*,/: ");
    scanf("%c",&c);
    float a,b;
    printf("Enter the value of a and b:");
    scanf("%f%f",&a,&b);

    switch(c)
    {
        case '+':
            printf("%.2f+%.2f=%.2f",a,b,a+b);
            break;
         case '-':
            printf("%.2f-%.2f=%.2f",a,b,a-b);
            break;
         case '*':
            printf("%.2f*%.2f=%.2f",a,b,a*b);
            break;
         case '/':
            if(b!=0){
            printf("%.2f/%.2f=%.2f",a,b,a/b);
           }
            else{
                printf("division is not possible");}
            break;
        default:
            printf("invalid choice");
    }
    return 0;
}