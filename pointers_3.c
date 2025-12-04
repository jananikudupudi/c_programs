#include<stdio.h>
int main()
{
	int a=10;
	float b=4.5;
	void *p;
	p=&a;
	printf("integer value : %d",*(int*)p);
	p=&b;
	printf("\nfloat value : %.2f",*(float*)p);
	
}
