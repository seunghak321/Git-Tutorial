﻿#include<stdio.h>

int main()
{
    int a;
    int i;
    scanf("%d", &a);
    for (i=1;i<=a;i++)
    {
        if (i == 3 || i == 6 || i == 9)
        {
            printf("X ");
        }
        else
        {
            printf("%d ", i);
        }
    }
    return 0;
}
