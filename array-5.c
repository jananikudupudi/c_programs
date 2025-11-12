#include<stdio.h>
int main()
{
	int A[50]={12,30,45,8,15,24};
	int i,sum,rem=0;
	for(i=0;i<6;i++)
	{
		rem+=A[i];
	}
	sum=rem;
	printf("sum of array is:%d",sum);
	return 0;
}
