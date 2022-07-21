#include<stdio.h>

int main()

{
	int arr[5] = {10,20,30,40,50};



	printf("%d\n",arr+1);
	printf("%d\n",(&arr)+1);
	printf("%d\n",arr+1);
	printf("%d\n",&arr);
	printf("%d\n",sizeof(&arr));
	printf("%d\n",arr[2]);
	printf("%d\n",*arr+1);
	printf("%d\n",*(2+arr));
	printf("%d\n",arr+1);
	printf("%d\n",arr);
	printf("%d\n",arr);
	printf("%d\n",arr);
	printf("%d\n",arr);


	return 0;


}