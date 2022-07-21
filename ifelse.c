#include<stdio.h>




int main()
{
	int marks = 0;



	

	printf("Enter your marks\n");



	scanf("%d",&marks);
	
	printf("your entered marks : %d\n",marks);



	if (marks>=50)
	{
		printf("First class\n");
	}
	else
	{
		printf("not a First class\n");
	}
	return 0;
}