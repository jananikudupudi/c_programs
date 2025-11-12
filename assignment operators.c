#include<stdio.h>
int main()
{
	int a;
	int b;
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%d",&b);
	printf("assign a value to b:%d\n",a=b);
	printf("add b value to a and store in a:%d\n",a+=b);
	printf("subtract b value from a and store in a:%d\n",a-=b);
	printf("multiply b value with a and store in a:%d\n",a*=b);
	printf("divide b value with a and store in a:%d\n",a/=b);
	printf("remainder when a is divided by b:%d",a%=b);
	return 0;
}
