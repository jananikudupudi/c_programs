#include<stdio.h>
int main()
{
	int units;
	float price,amount;
	printf("enter units:");
	scanf("%d",&units);
	if(units<=50)
	{
		price=20;
	}
	else if(units<=100)
	{
		price=30;
	}
	else if(units<=200)
	{
		price=40;
	}
	else if(units>200)
	{
		price=50;
	}
	amount=units*price;
	printf("electricity bill:%f",amount);
	return 0;
}
