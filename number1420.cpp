#include<stdio.h>

int main()
{
    int n;
    int i,j,k,a;
    int tmp;
    scanf("%d",&n);
    int test1[n], test2[n];
    char name[n][10];
    for(i=0; i<n; i++){
        scanf("%s %d", name[i], &test1[i]);
        test2[i]=test1[i];
    }
    for(j=0; j<n;j++){
    	for(k=j+1; k<n;k++){
    		if(test2[j]<=test2[k]){
    			tmp=test2[j];
    			test2[j]=test2[k];
    			test2[k]=tmp;
			}
		}
	}
	for(a=0; a<n;a++){
    		if(test2[2]==test1[a]){
    			printf("%s",name[a]);
    			return 0;
			}
	}
}
