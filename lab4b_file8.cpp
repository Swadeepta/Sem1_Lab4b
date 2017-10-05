
#include <iostream>
using namespace std;
int sumOfDigits(int n)
{ 
        if(n==0)
        {
              return 0;
        }
        else
        {
              return (n%10) + sumOfDigits(n/10);
        }
}

int main()
{
        int num;
        cout<<"\nENTER NUMBER: ";
        cin>>num;
        cout<<"\nSUM OF DIGITS: "<<sumOfDigits(num);
        return 0;
}
