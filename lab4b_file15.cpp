#include <iostream>
using namespace std;
void printmaxmin(int arr[], int start, int stop, int &min, int &max)
{
    if (start == stop)
    {
        min = max = arr[start];
    }
    else
    {
        int midpoint = (start + stop) / 2;

        int leftMin;
        int leftMax;
        int rightMin;
        int rightMax;

        printmaxmin(arr, start, midpoint, leftMin, leftMax);
        printmaxmin(arr, midpoint + 1, stop, rightMin, rightMax);

        if (leftMin < rightMin)
            min = leftMin;
        else
            min = rightMin;

        if (leftMax > rightMax)
            max = leftMax;
        else
            max = rightMax;
    }
}

int main()
{
    int arr[50],num;
	
	cout<<"\nEnter Array Size : ";
    cin>>num;
    for(int i=0; i<num; i++)
	{
        cout << "Array[" << i+1 << "] = " ;
        cin>>arr[i];
    }

    int min;
    int max;
    printmaxmin(arr, 0, num - 1, min, max);

    cout << "Minimum Element Is : " << min << '\n' << "Maximum Element Is : " << max;

    return 0;
}
