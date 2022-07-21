#include<stdio.h>

int main()
{
	
	int Arr[5] = {10,20,30,40,50};

	int *p = &(Arr[0]);

	int *q = &(Arr[4]);


	printf("value of p before incrementis %d\n",p);
	p++;
	//p = p+1
	// p = p+1
	//p = p+1*4
	//p = p+4
	//p = 100+4
	//p = 104

	printf("Value of p after increment is %d\n",p );

	q--;

	printf("Value of q beforedecrement %d\n",q);

	printf("Value of q afterdecrement %d\n",q);//

	


	return 0;


}