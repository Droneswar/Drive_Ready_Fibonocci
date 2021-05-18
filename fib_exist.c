#include<stdio.h>
void exist_fib(int num)
{
	int a=0,b=1,c=0;
	if(num==0||num==1)
	{
		printf("True");
		return;
	}
	else
	{
		while(c<num)
		{
			c=a+b;
			a=b;
			b=c;
		}
	
	}
		if(c==num)
		{
			printf("True");
		}
		else
		{
			printf("False");
		}
	return;
}
int main()
{
	int num,n;
	scanf("%d",&num);
	exist_fib(num);
	return 0;
}
