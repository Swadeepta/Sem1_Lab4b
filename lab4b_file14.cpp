#include <iostream>
using namespace std;
int printarray(int *aptr, int num,int k)
{
   if (num!=0)
   {
		k+=(*aptr);
    	return printarray(aptr+1,num-1,k);
   }
   else
   {
   	return k;
   }

}
int main()
{
    int arr[50],num,result;
    cout<<"\nEnter Array Size : ";
    cin>>num;
    for(int i=0; i<num; i++)
	{
        cout << "Array[" << i+1 << "] = " ;
        cin>>arr[i];
    }
    result=printarray(arr, num,0);
    cout<<"\nThe Sum Of Array Elements Are : "<<endl<<result;
    return 0;
}
