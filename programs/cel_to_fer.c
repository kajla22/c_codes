#include<stdio.h>
int main(){
    float cel;
    printf("Enter temperature in Celsius: ");
    scanf("%f",&cel);
    //converting to Fahrenheit
    float far = (cel * 9/5) + 32;
    printf("Temperature in Fahrenheit is %0.1f\n",far);
    return 0;
}