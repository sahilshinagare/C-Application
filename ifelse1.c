#include<stdio.h>


int main()
{
	auto int iage = 0;

	printf("enter your age :\n");

	scanf("%d\n",&iage);

	if((iage>=0)&&(iage<=10))
	{
		printf("your ticket amount is 200\n");
	}
	else if((iage>10)&&(iage<=40))
	{
		printf("your ticket amount is 500\n");
	}
	else if(iage>=40)
	{

		printf("your ticket amount is : 300\n");
	}

	return 0;
}