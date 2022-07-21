#include<stdio.h>

int main()

{
	auto int istd = 0;
	
	printf("please enter your standred :\n");

	scanf("%d\n",&istd);




	if(istd == 1)
	{
		printf("your exam at 8\n");
	}

	else if (istd == 2)
	{
		printf("your exam at 9\n");
	}

	else if (istd == 3)
	{
		printf("your exam at 10\n");
	}

	else if (istd == 4)
	{
		printf("your exam at 11\n");
	}

	else if(istd == 5)
	{
		printf("your exam at 12\n");

	}

	else
	{
		printf("invalid standred\n");
	}	


	return 0;
}