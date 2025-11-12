#include<stdio.h>
int main()
{
	char grade;
	char name[10];
	char sen[20];
	printf("Enter Grade:");
	scanf("%c",&grade);
	printf("Enter name:");
	scanf("%s",name);
	getchar();
	printf("Enter Sentence:");
	scanf("%[^\n]",&sen);
	printf("%c\n%s\n%s",grade,name,sen);
	return 0;
}
