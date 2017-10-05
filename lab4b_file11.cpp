#include<iostream>
using namespace std;
int gcd (int,int,int);
int main()
{
	int num1,num2,result,m;
	cout<<"\nEnter A Number : ";
	cin>>num1;
	cout<<"\nEnter Another Number : ";
	cin>>num2;
	m=(num1<num2) ? num1:num2;
	result=gcd(num1,num2,m);
	cout<<"\nThe GCD(HCF) Of The Two Numbers Is : " <<endl<<result;
	return 0;
}
int gcd(int num1,int num2,int m)
{
	if(num1==1||num2==1)
	{
		return 1;
	}
	else if((num1%m)==0&&(num2%m==0))
	{
		return m;
	}
	else 
	{
		return gcd(num1,num2,(m-1));
	}
}
