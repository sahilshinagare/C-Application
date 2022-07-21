#include<stdio.h>
                        //gharakhalacha dukan
int addition(int no1, int no2)       //function defination
{
	int ans=0;                      //local variablr of addtion
	ans = no1+no2;               //berij keli by ALU

	return ans;                 //jyana call kela tyala value dya

}                                //block cha shewat

int main()                           //ithun rpogram chalu hoto
{                             //block cha swevat
	int A = 10;              //local variables of main
	int B = 11;
	int C = 0;

	C = addition(A,B);          //function call

	printf("%d",C);         //gharchyana sanga kay zhalay


	return 0;               //os la sanga sagla nit zhala
}                           //block cha shewat