#include<stdio.h>
int main()
{
	int i,j,a[50],n,temp,min;
	printf("enter n value");
	scanf("%d",&n);
	printf("enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min=i;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		if(min!=i)
		{ 
		  temp=a[i];
		  a[i]=a[min];
		  a[min]=temp;	
		}
	} 
      printf("sorted array elements:");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
	
}
