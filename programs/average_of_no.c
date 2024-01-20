#include<stdio.h>
int main(){
    float a,b,c,d;
    printf("Enter the four no: ");
    scanf("%f%f%f%f",&a,&b,&c,&d);

   float mean=0;
   mean=(a+b+c+d)/4;
   printf("mean is %f",mean);

   return 0;
}