#include <stdio.h>

int main()
{
    int a,b;
    int i,t;
    scanf("%d %d", &a, &b);
    for (i=1;i<=a;i++)
    {
        for (t=1;t<=b;t++)
        {
            printf("%d %d\n", i, t);
        }
    }
    return 0;
}
