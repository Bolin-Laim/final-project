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
		printf("請輸入今天的煙用量");
		scanf_s("%f", &x1);
		printf("第%d天\n", day + 1);
		printf("今日使用量:", x1);
		n = x1 * ni1;
		m = x1 * mi2;
		printf("已攝取%f尼古丁和%f焦油\n", n, m);
		A(x1,x2);
		x2 = (0.9*m) / mi2;
		printf("建議明日應減少至%.2f根\n", x2);
		fprintf(ABC, "第%d天抽%.2f根攝取%.2f尼古丁%.2f焦油，明日應減少至%.2f根\n", day, x1, n, m, x1 - x2);
		day++;
	}
}*/