#include <stdio.h>

int main()
{
	long int a,b;
	scanf("%ld-%ld", &a, &b);
	if(b/1000000==1)
	{
		printf("19%02d/%02d/%02d M",a/10000,(a%10000)/100,a%100);
	}
	else if(b/1000000==2)
	{
		printf("19%02d/%02d/%02d F",a/10000,(a%10000)/100,a%100);
	}
	else if(b/1000000==3)
	{
		printf("19%02d/%02d/%02d M",a/10000,(a%10000)/100,a%100);
	}
	else if(b/1000000==4)
	{
		printf("19%02d/%02d/%02d F",a/10000,(a%10000)/100,a%100);
	}
	return 0;
}
