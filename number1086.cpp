#include<stdio.h>

int main() 
{
     int r,g,b;
     float kb;
     scanf("%d %d %d", &r, &g, &b);
     kb = ((r*g*b)/8)/1024;
     printf("%.2f MB",kb/1024);
     return 0;
}
