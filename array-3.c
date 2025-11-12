#include<stdio.h>
int main()
{
	int i, A[50]={7,9,14,8,10,22,5};
    A[7]=9;
    A[3]=18;
    for(i=0;i<8;i++)
    {
      printf("%d\n",A[i]);
    }
	return 0;
}  
