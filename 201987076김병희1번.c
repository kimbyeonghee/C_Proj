#include <stdio.h>

int main(void)
{
	int i;
	int n;	//�� ��  

	printf("���° �ٱ��� ������ �����ðڽ��ϱ�?: ");
	scanf("%d",&n);
	
	printf("1������ ���\n");
	for(i=0;i<n;i++)		//�� ��  
	{
		
			if(i==0)
				printf("�����");
			if(i==1)
				printf("���");
			if(i==2)
				printf("���");
			if(i==3)
				printf("�����");
			else
			    printf("");
		
		printf("\n");
	}
	
		return 0;
}
