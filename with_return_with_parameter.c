#include<stdio.h>
int add(int a,int b)         //with return and parameters
{
	return a+b;
}
int main()
{
    int a,b;
    a=5,b=9;
	int sum;
	sum=add(a,b);
	printf("%d",sum);
}
