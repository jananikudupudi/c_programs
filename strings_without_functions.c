#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100],s2[100], result[200];
	int choice,i,j,flag,len;
	printf("1. Find length");
	printf("\n2. Copy string");
	printf("\n3. Compare string");
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
			len++;
			printf("length of string:%d\n",len);
			break;
		case 2:
			printf("\nenter the string:");
			scanf(" %[^\n]",s1);
			for(i=0;s1[i]!='\0';i++)
			{
				s2[i]=s1[i];
			}
			s2[i]='\0';
			printf("\ncopied string is:%s",s2);
			break;
		case 3: 
		    printf("enter the string:");
			scanf(" %[^\n]",s1);
			printf("enter the string:");
			scanf("% [^\n]",s2);
			flag=0;
			for(i=0;s1[i]!='\0'||s2[i]!='\0';i++)
			{
				if(s1[i]!=s2[i])
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			    printf("Strings are EQUAL\n");
		    else
		        printf("Strings are NOT equal\n");
			break;
		case 4:
		    printf("enter the string:");
			scanf(" %[^\n]",s1);
			len=0;
			for(i=0;s1[i]!='\0';i++)
			{
				len++;
			}
			printf("reverse of a string is:");
			for(i=len-1;i>=0;i--)
			{
				printf("%c",s1[i]);
			}
			printf("\n");
			break;
		case 5:
		    printf("enter the string:");
			scanf(" %[^\n]",s1);
			printf("enter the string:");
			scanf(" %[^\n]",s2);
			for(i=0;s1[i]!='\0';i++)
			{
				result[i]=s1[i];
			}
			for(j=0;s2[j]!='\0';j++)
			{
				result[i+j]=s2[j];
			}
			result[i+j]='\0';
			printf("concatenated strings:%s\n",result);
			break;
		case 6:
		    printf("enter the string:");
			scanf(" %[^\n]",s1);
			for(i=0;s1[i]!='\0';i++)
			{
				if(s1[i]>='a'&&s1[i]<='z')
				{
					s1[i]=s1[i]+32;
				}
			}
			printf("lowercase of given string is:%s",s1);
			break;
		case 7:
		    printf("enter the string:");
			scanf(" %[^\n]",s1);
			for(i=0;s1[i]!='\0';i++)
			{
				if(s1[i]>='a'&&s1[i]<='z')
				{
					s1[i]=s1[i]-32;
				}
			}
			printf("uppercase of given string is:%s",s1);
			break;
		default:
		    printf("invalid");	
	}
	return 0;
}
