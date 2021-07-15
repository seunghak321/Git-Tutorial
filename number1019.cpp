#include <stdio.h>

int main()
{
    int a, b, c;
    char d;
    scanf("%d%c%d%c%d", &a, &d, &b, &d, &c);
    printf("%04d%c%02d%c%02d", a, d, b, d, c);
    return 0;
}
