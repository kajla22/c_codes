#include <stdio.h>
int main()
{
    int a = 0, b = 1, n, num;
    printf("Enter no of terms:");
    scanf("%d", &n);
    if (n <= 1)
        printf("%d", a);
    else if (n <= 2)
        printf("%d", b);

    else
    {
        printf("%d %d ", a, b);
        for (int i = 3; i <= n; i++)
        {
            num = a + b;
            a = b;
            b = num;
            printf("%d ", num);
        }
    }
    return 0;
}