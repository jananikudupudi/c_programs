#include<stdio.h>
int main()
{
	int a=10;
	int *p=&a;
	int **ptr=&p;
	int ***ptrs=&ptr;
	
	printf("%d\n",a);
	printf("%d\n",*p);
	printf("%d\n",**ptr);
	printf("%d\n",***ptrs);	
}
