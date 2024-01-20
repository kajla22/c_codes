#include<stdio.h>
int main(){
    float fer;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f",&fer);
    
    float cel = (fer-32)*5/9;
    printf("Temperature in Celsius is %0.1f\n",cel);
    return 0;
}