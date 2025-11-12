#include<stdio.h>
int main()
{
	float f,c;
	printf("enter temperature in f:");
	scanf("%f",&f);
	c=(f-32)*5/9;
	printf("temp in c:%f",c);
	return 0;
}
