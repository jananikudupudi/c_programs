#include<stdio.h>
int main()
{
	float f,c;
	printf("enter temperature in f:");
	scanf("%f",&f);
	c=(f-32)*0.55;
	printf("%f",c);
	return 0;
}
