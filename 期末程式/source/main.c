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
		printf("檔案開啟失敗!!\n");
	}
	else
	{
		printf("請輸入欲達目標的時間");
		scanf_s("%d", &y);			
		printf("請輸入尼古丁及焦油含量");
		scanf_s("%f%f", &z1, &z2);
		while (day!=y)
		{
			printf("請輸入今天的煙用量");
			scanf_s("%f", &x1);
			printf("第%d天\n", day+1);
			printf("今日使用量:", x1);
			n = x1 * z1;
			m = x1* z2;
			printf("已攝取%f尼古丁和%f焦油\n", n, m);
			if (day != 0)
			{
				if (x1 < x2)
					printf("做得好繼續保持\n");
				else
					printf("沒達到目標要再加油\n");
			}
			x2 =(0.9*m) / z2;
			printf("建議明日應減少至%.2f根\n", x2);
			fprintf(ABC,"第%d天抽%.2f根攝取%.2f尼古丁%.2f焦油，明日應減少至%.2f根\n", day,x1,n,m,x1-x2);
			day++;
		}
		fclose(ABC);
	}
	system("pause");
	return 0;
}