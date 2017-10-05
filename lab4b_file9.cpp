
#include <iostream>
using namespace std;
int factorial(int n)
{ 
        if(n==1)
        {
              return 1;
        }
        else
        {
              return n*factorial(n-1);
        }
}

int main()
{
        int num;
   
        cout<<"\n ENTER NUMBER: ";
        cin>>num;
        cout<<"\n Factorial of the number is:"<<factorial(num);
        return 0;
}
