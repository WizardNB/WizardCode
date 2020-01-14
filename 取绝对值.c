#include<stdio.h>

int main()
{
	printf("请输入整数，注意！否则将出错！\n输入0结束\n");
	while(1)
	{
	int a;
	scanf("%d",&a);
	if(a==0)
	{
	goto end;
	}
	if (a < 0)
	{
		a=-a;
	}
	printf("%d\n",a);
	}
end:return 0;
}