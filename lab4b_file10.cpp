
#include <iostream>
using namespace std;
int fibo_recur(int n)
{
    if (n == 1 )
        return 0;
   else if(n==2)
       return 1;
    else
        return fibo_recur(n - 1) + fibo_recur(n - 2);
}

int main()
{
    int n;
        cout<<"\n Enter the integer n to find nth fibonnaci no.";
        cin>>n;
        cout<<"\n The nth Fibonacci number is: "<<fibo_recur(n)<<endl;
        return 0;
}
