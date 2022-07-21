#include<stdio.h>

int Addtion(int no1,int no2)
{
	

	int ans = 0;

	ans = no1 + no2;
	return ans;

}

int main()
{
	
	int a = 5;
	int b = 10;
	int ret = 0;

	int (*fptr)(int,int);
	fptr = Addtion;


	ret = fptr(a,b);


	printf("Addtion is %d\n",ret);

	return 0;




}