#include <stdio.h>

int main()
{
	int a[7];
	int i;
	int sum = 0;
	int min = 100;
	for(i=0;i<7;i++)
	{
		scanf("%d", &a[i]);
		if(a[i]%2==1)
		{
			sum = sum + a[i];
			if(a[i]<min)
			{
				min = a[i];
			}
		}
	}
	printf("%d\n", sum);
	printf("%d", min);
	return 0;
}
