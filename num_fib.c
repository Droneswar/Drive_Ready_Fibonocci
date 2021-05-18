#include<stdio.h>
void num_fib(int num)
{
	int a=0,b=1,c=0,c1;
	if(num==0 || num==1)
	{
		printf("True");
		return;
	}
	else
	{
		while(c<=num)
		{
			c1=c;
			c=a+b;
			a=b;
			b=c;
		}
	}
	if(c1==num)
	{
		printf("True");
	}
	else if((c-num)>(num-c1))
	{
		printf("%d",c1);
	}
	else if((c-num)<(num-c1))
	{
		printf("%d",c);
	}
	else
	{
		printf("%d %d",c1,c);
	}
}

int main()
{
	int num;
	scanf("%d",&num);
	num_fib(num);
	return 0;
}
