#include <stdio.h>

int main(void)
{
	int i,j;
	int n;	//�� ��  

	printf("���° �ٱ��� ������ �����ðڽ��ϱ�?: ");
	scanf("%d",&n);
	
	printf("2������ ���\n");
	for(i=0;i<n;i++)		//�� ��  
	{
		for(j=0;j<n;j++) 
		{
			if(j<=i)
				printf("��");
		}
		printf("\n");
	}
	
		return 0;
}
