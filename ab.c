/*#include<stdio.h>
#include<stdlib.h>
#include"A.c"
void ab(int y1,float ni1,float mi2 )
{
	int  day = 0;
	float x1 = 1, x2 = 1;
	float n = 1, m = 1;
	FILE*ABC;
	ABC = fopen("C://ABC.txt", "w");
	while (day != y1)
	{
		printf("�п�J���Ѫ��ϥζq");
		scanf_s("%f", &x1);
		printf("��%d��\n", day + 1);
		printf("����ϥζq:", x1);
		n = x1 * ni1;
		m = x1 * mi2;
		printf("�w���%f���j�B�M%f�J�o\n", n, m);
		A(x1,x2);
		x2 = (0.9*m) / mi2;
		printf("��ĳ��������֦�%.2f��\n", x2);
		fprintf(ABC, "��%d�ѩ�%.2f�����%.2f���j�B%.2f�J�o�A��������֦�%.2f��\n", day, x1, n, m, x1 - x2);
		day++;
	}
}*/