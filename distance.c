#include<stdio.h>
int main()
{
	float a,t,u,d;
	printf("enter accceleration:");
	scanf("%f",&a);
	printf("enter time:");
	scanf("%f",&t);
	printf("enter velocity:");
	scanf("%f",&u);
	d=u*t+(a*t*t)/2;
	printf("distance is:%f",d);
	return 0;
}
