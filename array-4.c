#include<stdio.h>
int main()
{
	int i,n,key,roll_num[59];
	printf("enter n value:");
	scanf("%d",&n);
	printf("enter roll numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d\n",&roll_num[i]);
	}
	printf("enter key value:");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(key==roll_num[i])
		{
			printf("element found at index %d",i);
			break;
		}
	}
	return 0;
}
