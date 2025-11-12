#include<stdio.h>
int main()
{
	int i, n, sum=0;
	printf("enter a nummber:");
	scanf("%d",&n); 
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	printf("sum of first %d nummbers is %d",n,sum);
	return 0;
}
