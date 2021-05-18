#include<stdio.h>
int even_fib(int num)
{
	int a=0,b=1,c,even=1;
	if(num==1)
	{
		return a;
	}
	else if(num==2)
	{
		return b;
	}
	else
	{
		while(num-2)
		{
			c=a+b;
			a=b;
			b=c;
			num--;
		}
	}
	
	return c;
}
int main()
{
	int num,n;
	scanf("%d",&num);
	n=even_fib(num);
	printf("%d",n);
	return 0;
}
