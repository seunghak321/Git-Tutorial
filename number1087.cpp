#include<stdio.h>

int main()
{
    int a;
    int i;
    int sum = 0;
    scanf("%d", &a);
    for (i = 1; ; i++)
    {
        sum = sum + i;
        if (sum >= a)
        {
            printf("%d",sum);
            return 0;
        }
    }
    return 0;
}
