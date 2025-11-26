#include<stdio.h>
#include<string.h>
int main()
{
	char s1[10],s2[10];
	int choice,value;
	printf("1.string length");
	printf("\n2.string copy");
	printf("\n3.string compare");
	printf("\n4.string reverse");
	printf("\n5.string concatination");
	printf("\n6.string lowercase");
	printf("\n7.string uppercase");
	printf("\nenter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("enter the string:");
			scanf(" %[^\n]",s1);
			printf("\nlength of given string:%d",strlen(s1));
			break;
		case 2:
			printf("\nenter the string:");
			scanf(" %[^\n]",s1);
			strcpy(s2,s1);
			printf("\ncopied string is:%s",s2);
			break;
		case 3:
		    printf("enter the string:");
			scanf(" %[^\n]",s1);
			printf("enter the string:");
			scanf("% [^\n]",s2);
			printf("compare two strings:%d",strcmp(s1,s2));
			break;
		case 4:
		    printf("enter the string:");
			scanf(" %[^\n]",s1);
			printf("reverse of a string is:%s",strrev(s1));
			break;
		case 5:
		    printf("enter the string:");
			scanf(" %[^\n]",s1);
			printf("enter the string:");
			scanf(" %[^\n]",s2);
			printf("concatenation of two strings:%s",strcat(s1,s2));
			break;
		case 6:
		    printf("enter the string:");
			scanf(" %[^\n]",s1);
			printf("lowercase of given string is:%s",strlwr(s1));
			break;
		case 7:
		    printf("enter the string:");
			scanf(" %[^\n]",s1);
			printf("uppercase of given string is:%s",strupr(s1));
			break;
		default:
		    printf("invalid");	
	}
	return 0;
}
