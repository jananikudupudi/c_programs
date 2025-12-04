#include<stdio.h>
int a=5; //global variable
void add()
{
	int a=7,b=9; //local variables
	printf("sum = %d\n",a+b); //without return type and parameters
}
int main()
{
	add();
	printf("a = %d",a);
}
