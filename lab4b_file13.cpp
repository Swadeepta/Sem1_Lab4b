#include <iostream>
using namespace std;
void print_array(int array[], int size)
{
if( size==0 )
            return;
        else{
             print_array(array, --size); 
             }
             cout << array[size] << " ";
    }
int main()
{   int size;
    cout << "Please Enter Array Size: ";
    cin >> size;
    int* array = new int [size]; 
    cout << "\nPlease Enter Array Elements:\n";
    for( int i=0 ; i<size ; i++ )
    {
         cout << "Array[" << i+1 << "] = " ;
        cin >> array[i];
    }
    cout <<"\nThe Array Prints As : \n";
    print_array(array, size);
    return 0;
}

