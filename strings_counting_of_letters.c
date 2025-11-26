#include<stdio.h>
int main()
{
	char s[100];
	int i, v=0, x=0, d=0, c=0;
	printf("enter a sentence:");
	fgets(s,sizeof(s),stdin);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
		{
			v++;
		}
		else if(s[i]>='a' && s[i]<='z'||s[i]>='A' && s[i]<='Z')
		{
			c++;
		}
		else if(s[i]>='0' && s[i]<='9')
		{
			d++;
		}
		else if(s[i]==' ')
		{
			x++;
		}
	}
	printf("vowels: %d\nconsonants: %d\ndigits: %d\nspaces: %d",v,c,d,x);
	return 0;
}
