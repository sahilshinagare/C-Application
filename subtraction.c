#include<stdio.h>

int subtraction(int no1,int no2)
{
	int ans = 0;
	ans = no1-no2;

	return ans;

}
int main()
{
	/* code */
	int A = 30;
	int B = 24;
	int C = 0;

	C = subtraction(A,B);

	printf("%d",C );



	return 0;
}
