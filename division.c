#include<stdio.h>

int division(int no1,int no2)
{
	int ans = 0;

	ans = no1/no2;


	return ans;


}
int main()
{
	int A = 100;
	int B = 10;
	int C = 0;

	C = division(A,B);

	printf("%d",C);
	return 0;
}