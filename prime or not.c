#include<stdio.h>
int main()
{
	int num,factor,i;
	printf("enter the number:");
	scanf("%d",&num);
	factor=0;
	for(i=2;i<=num;i++)
	{
		if(num%i==0)
		{
			factor=factor+1;
		}
	}
	if (factor>2)
	{
		printf("not prime");
	}
	else
	{
		printf("prime");
	}
	return 0;
}
