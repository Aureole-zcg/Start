#include<stdio.h>
int main()
{
	int scan,flag=0;
	while (1)
	{
		printf("输入:");
		scanf("%d", &scan);//扫描按键
		if (scan == 1)
		{
			flag = !flag;//按键标示符
			while (flag == 1)
			{
				printf("1\n");
				break;
			}
			while (flag == 0)//第二次按下翻转状态2
			{
				printf("2\n");
				break;
			}
		}	
	}
	return 1;
}
