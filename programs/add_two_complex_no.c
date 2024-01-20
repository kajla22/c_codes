#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter the value of a and b: ");
    scanf("%d %d",&a, &b);
    printf("%d+%di\n",a,b);

    printf("Enter the value of c and d: ");
    scanf("%d %d",&c, &d);
    printf("%d+%di\n",c,d);

    int x=a+c;
    int y=b+d;

   printf("addition is %d+%di",x,y);

   return 0;
}
