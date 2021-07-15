#include <stdio.h>

int main()
{
	int a, gan, ez;
	scanf("%d",&a);
	a+=56;
	gan = a%10;
	ez = a%12;
	printf("%c%d", 'A'+ez, gan);
	return 0;
}
