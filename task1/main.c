#include<stdio.h>
#include<math.h>
int main()
{
	float a,i,y;
	double x;
	//a=M_E;
	a=M_PI;
    x=0;//设置x的初始值为0
	float h=0.001;//定义步长
	//printf("请输入a的值");
	//scanf("%f",&a);
	printf("x         y\n");
	y=a;//定义y在x为0的值为a
	printf("%lf  ",x);
	printf("%f\n",y);
	do
	{
		i=y;
		y=y+h*(-y);
		x+=h;
		printf("%lf  ",x);
		printf("%f\t",y);
		printf("\n");
	} while(fabs(y-i)>0.001*h);
	printf("定时值为%f",y);
	return 0;
}