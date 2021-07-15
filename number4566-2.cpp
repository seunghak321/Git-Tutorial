#include<stdio.h>

int main()
{
	int a,b;
	int i,j;
	int cnt;
	int sum=0;
	int e[10000];
	int c = -1;
	e[0]=-1;
	scanf("%d\n",&a);
	scanf("%d",&b);
	for(j=a; j<=b; j++)
	{
		cnt = 0;
		for(i=1; i<=j; i++)
		{
			if(j%i==0)
			{
				cnt=cnt+1;
			}
		}
		if(cnt==2)
		{
			c=c+1;
			e[c]=j;
			sum = sum + j;
		}
	}
	if(e[0]==-1)
	{
		printf("-1");
	}
	else
	{
		printf("%d\n",sum);
		printf("%d",e[0]);
	}
	return 0;
}
