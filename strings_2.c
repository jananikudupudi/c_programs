#include<stdio.h>
#include<string.h>
int main()
{
	char name[10], full_name[20], address[30];
	printf("enter your name:");
	scanf("%s",name);
	printf("My name is:%s\n",name);
	getchar();
	printf("enter full name:");
	fgets(full_name,sizeof(full_name),stdin);
	printf("My full name is:%s",full_name);
	return 0;
}
