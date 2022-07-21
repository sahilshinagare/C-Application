#include<stdio.h>
#include<stdlib.h>

int main()


{

	int  size = 0;    //static meomary loacation

	int *ptr = NULL;




	printf("Enter number of elements that you want to alocate:");

	scanf("%d",&size);

	ptr = (int *)malloc(size * sizof(int));
	if(ptr == NULL)
	{
		printf("Unable to allocate the meomary\n");

	}

	else
	{
		printf("Meomary succtesfully allocated");
	}

	free(ptr);gcc








	return 0;

}