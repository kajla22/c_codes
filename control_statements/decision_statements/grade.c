#include<stdio.h>
int main(){
    float percentage;
    printf("Enter your percrntage:");
    scanf("%f",&percentage);

    if(percentage>=65)
        printf("First Division");
    else if(percentage>=50&&percentage<65)
        printf("Second Division");
    else if(percentage>=33&&percentage<50)
         printf("Third Division");
    else
        printf("Next time");
    
    return 0;
}