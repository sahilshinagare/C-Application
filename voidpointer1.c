#include<stdio.h>

int main()

{
	
	int iValue = 11;
	char Value ='A';
	float fValue = 22.32;
	double dValue = 20.33;


	void *ptr = NULL;

	ptr = &iValue;

	printf("%d\n",(int *)ptr);


	return 0;


}