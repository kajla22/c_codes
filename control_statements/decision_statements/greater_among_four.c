#include<stdio.h>
int main(){
    long int a,b,c,d;
    printf("Enter the four no.:");
    scanf("%ld%ld%ld%ld",&a,&b,&c,&d);

    if(a>b&&a>c&&a>d)
        printf("%ld is greater",a);
    else if(b>a&&b>c&&b>d)
        printf("%ld is greater",d);
    else if(c>a&&c>c&&c>d)
        printf("%ld is greater",c);
    else   
        printf("%ld is greater",d);
    
    return 0;
}