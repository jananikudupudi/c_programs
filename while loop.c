#include<stdio.h>
int main()
{
	int n,num,sum,rem;
	printf("enter a five digit number:");
	scanf("%d",&num);
	n=num;
	sum=0;
	while(num!=0)
	{
	rem=num%10;
	sum+=rem;
	num=num/10;
    }
    printf("sum of %d is:%d",n,sum);
    return 0;
}
