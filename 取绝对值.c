#include<stdio.h>

int main()
{
	printf("������������ע�⣡���򽫳���\n����0����\n");
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