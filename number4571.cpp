#include<stdio.h>

int main()
{
	int a,b;
	int i,j;
	int f = -1;
	int e[100];
	e[0]=-1;
	int sum=0;
	scanf("%d\n",&a); 
	scanf("%d",&b);
	for(i=1; i<=100; i++){
		for(j=a; j<=b; j++){
			if(i*i==j){
				sum=sum+j;
				f=f+1;
				e[f]=j;
			}
		}
	}
	if(e[0]==-1){
		printf("-1");
	}
	else{
	printf("%d\n",sum);
	printf("%d",e[0]);
	}
	return 0;
}
