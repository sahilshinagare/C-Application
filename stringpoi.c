#include<stdio.h.>


int main()
{
	char arr[5] = "abcd";
	char *ptr = arr;



	while(*ptr != '\0')
	{
		printf("%c\n",*ptr);

		ptr--;

		


	}

	return 0;

}