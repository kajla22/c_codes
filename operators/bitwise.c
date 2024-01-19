#include<stdio.h>
int main(){
    int a,b;
    
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    int c=a&b;
      printf("bitwise AND is:%d\n",c);
    int d=a|b;
      printf("bitwise OR is:%d\n",d);
    int e=a^b;
      printf("bitwise XOR is:%d\n",e);
    int f=~a;
      printf("bitwise NOT is:%d\n",f);
    int g=a<<b;
      printf("bitwise left shift is:%d\n",g);
    int h=a>>b;
      printf("bitwise right shift is:%d\n",h);

      return 0;
}