#include <iostream>
using namespace std;

int sum(int i)
{ 
  int sm=0;
  if(i==0)
  { 
   return sm;
  }
  sm+=i;
  return (sm+sum(i-1));
}
   
int main()
{
  int num;
  cout<<"PROGRAM TO PRINT SUM OF ALL NATURAL NUMBERS FROM 1 TO n";
  cout<<"\nEnter the upper limit: ";
  cin>>num;
  int sum1=sum(num);
  cout<<"\n The sum is: "<<sum1;
  return 0;
}
