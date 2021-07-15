#include<stdio.h>

int main()
{
    char a[1000];
    int i;
    for (i = 0; i< 1000;i++)
    {
        scanf("%c", &a[i]);
        if (a[i] == 'q')
        {
            printf("q");
            return 0;
        }
        else
        {
            printf("%c", a[i]);
        }
    }
    return 0;
}
