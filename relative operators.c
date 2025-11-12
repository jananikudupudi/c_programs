#include<stdio.h>
int main()
{
	int a;
	int b;
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%d",&b);
	printf("asuming a is greater than b:%d\n",a>b);
	printf("asuming a is less than b:%d\n",a<b);
	printf("asuming a is equal to b:%d\n",a==b);
	printf("asuming a is greater than or equals to b:%d\n",a>=b);
	printf("asuming a is less than or equals to b:%d\n",a<=b);
	printf("asuming a is not equal to b:%d",a!=b);
	return 0;
}
