#include<stdio.h>
#include<stdlib.h>

#pragma warning(disable : 4996)
int main(void)
{
	int  day = 0, y=1;
	float z1=1,z2=1;
	float x1=1,x2=1;
	float n=1,m=1;
	FILE*ABC;
	ABC = fopen("C://ABC.txt","w");
	if (ABC == NULL)
	{
		printf("�ɮ׶}�ҥ���!!\n");
	}
	else
	{
		printf("�п�J���F�ؼЪ��ɶ�");
		scanf_s("%d", &y);			
		printf("�п�J���j�B�εJ�o�t�q");
		scanf_s("%f%f", &z1, &z2);
		while (day!=y)
		{
			printf("�п�J���Ѫ��ϥζq");
			scanf_s("%f", &x1);
			printf("��%d��\n", day+1);
			printf("����ϥζq:", x1);
			n = x1 * z1;
			m = x1* z2;
			printf("�w���%f���j�B�M%f�J�o\n", n, m);
			if (day != 0)
			{
				if (x1 < x2)
					printf("���o�n�~��O��\n");
				else
					printf("�S�F��ؼЭn�A�[�o\n");
			}
			x2 =(0.9*m) / z2;
			printf("��ĳ��������֦�%.2f��\n", x2);
			fprintf(ABC,"��%d�ѩ�%.2f�����%.2f���j�B%.2f�J�o�A��������֦�%.2f��\n", day,x1,n,m,x1-x2);
			day++;
		}
		fclose(ABC);
	}
	system("pause");
	return 0;
}