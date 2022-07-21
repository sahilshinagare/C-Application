#include<stdio.h>

int main()

{
	char cValue = 'M';

	char *cPtr = &cValue;

	int iValue = 21;

	int *iptr = &iValue;

	float fValue = 10.11;

	float *fPtr = &fValue;

	double dValue = 20.11;

	double *dptr = &dValue;

	printf("%c\n",*cPtr);

	printf("%d\n",&cValue);

	printf("%d\n",cPtr);
	
	return 0;
}