#include<iostream>
using namespace std;
int lcm(int,int,int);
int main()
{
	int num1,num2,result,m;
	cout<<"\nEnter A Number : ";
	cin>>num1;
	cout<<"\nEnter Another Number : ";
	cin>>num2;
	m=(num1>num2) ? num1:num2;
	result=lcm(num1,num2,m);
	cout<<"\nThe LCM Of The Two Number Is : "<<endl<<result;
	return 0;
}
int lcm(int num1,int num2,int m)
{
	if(num1==1||num2==1)
    {
        return 1;
    }
    else if ((m%num1)==0&&(m%num2==0))
	{
		return m;
	}
	else 
	{
		return lcm(num1,num2,(m+1));
	}
}
