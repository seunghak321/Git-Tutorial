#include <stdio.h>
#include <stdlib.h>    // qsort 함수가 선언된 헤더 파일

int compare(const void *a, const void *b)    // 오름차순 비교 함수 구현
{
    int num1 = *(int *)a;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴
    int num2 = *(int *)b;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴

    if (num1 < num2)    // a가 b보다 작을 때는
        return 1;      // -1 반환
    
    if (num1 > num2)    // a가 b보다 클 때는
        return -1;       // 1 반환
    
    return 0;    // a와 b가 같을 때는 0 반환
}
int main()
{
    int n;
    int i,a;
    scanf("%d",&n);
    int test1[n],test2[n];
    char name[n][10];
    for(i=0; i<n; i++){
        scanf("%s %d", name[i], &test1[i]);
        test2[i]=test1[i];
    }
    qsort(test2, sizeof(test2) / sizeof(int), sizeof(int), compare);
	for(a=0; a<n;a++){
    		if(test2[2]==test1[a]){
    			printf("%s",name[a]);
    			return 0;
			}
	}
}
