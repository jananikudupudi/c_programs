#include<stdio.h>
int main()
{
	char c[100];
	printf("enter a sentence:\n");
	fgets(c,sizeof(c),stdin);
	printf("%s",c);
	return 0;
}
