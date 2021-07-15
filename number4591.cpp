#include <stdio.h>

int main()
{
	int a[9];
	int i;
	int max = 0;
	int num = 0;
	for(i=0;i<=8;i++)
	{
		scanf("%d", &a[i]);
		if(a[i]>max)
		{
			max = a[i];
			num = i+1;
		}
	}
	printf("%d\n", max);
	printf("%d", num);
	return 0;
}
