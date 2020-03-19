#include <stdio.h>

int main(void)
{
	int i;
	int n;	//줄 수  

	printf("몇번째 줄까지 도형을 넣으시겠습니까?: ");
	scanf("%d",&n);
	
	printf("1번도형 출력\n");
	for(i=0;i<n;i++)		//출 력  
	{
		
			if(i==0)
				printf("■■■■");
			if(i==1)
				printf("■■");
			if(i==2)
				printf("■■");
			if(i==3)
				printf("■■■■");
			else
			    printf("");
		
		printf("\n");
	}
	
		return 0;
}
