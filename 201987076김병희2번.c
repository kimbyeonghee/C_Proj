#include <stdio.h>

int main(void)
{
	int i,j;
	int n;	//줄 수  

	printf("몇번째 줄까지 도형을 넣으시겠습니까?: ");
	scanf("%d",&n);
	
	printf("2번도형 출력\n");
	for(i=0;i<n;i++)		//출 력  
	{
		for(j=0;j<n;j++) 
		{
			if(j<=i)
				printf("△");
		}
		printf("\n");
	}
	
		return 0;
}
