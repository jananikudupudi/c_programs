#include<stdio.h>
int main()
{
	char c[100];
	int i;
	printf("enter a sentence:");
	fgets(c,sizeof(c),stdin);
	printf("words in a sentence are:\n");
	for(i=0;c[i]!='\0';i++)
	{
		if(c[i]==' ')
		{
			printf("\n");
		}
		else
		{
			printf("%c",c[i]);
		}
	}
	return 0;
}
