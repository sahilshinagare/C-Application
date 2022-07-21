#include<stdio.h>

void Demo()

{
	int A = 10;
	A++; //++ ni value ekane increment hote
	printf("%d\n",A);

}

void hello()
{
	static int  A = 10;
	A++; //++ ni value ekane increment hote
	printf("%d\n",A);

}

int main()
{

	Demo(); 		//function call

	Demo(); 
			//function call
	hello();
	hello();

	
	return 0;
}