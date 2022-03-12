
#include<stdio.h>
int main()
{
	float r, c, s;//计算圆的周长和面积
	printf("请输入圆的半径：");
	scanf("%f", &r);
	c = 2 * 3.14f * r;
	s = 3.14f * r * r;
	printf("周长是%.2f\n", c);
	printf("面积是%.2f\n", s);
	return 0;
}
