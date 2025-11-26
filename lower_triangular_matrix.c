#include<stdio.h>
int main()
{
	int a[3][3], i ,j,flag;
	printf("enter array elements in a:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(j>i&&a[i][j]!=0)
			
			{
				flag=1;
			}
		}
	}
	if(flag==0)
	{
		printf("it is lower triangular matrix");
	}
	else
	{
		printf("not a lower triangular matrix");
	}
	return 0;
}
