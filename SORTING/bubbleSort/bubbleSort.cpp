// bubble sort 
//  larget elment push back to the last 
//  swapping method use dto swap two element push back large element 

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {12, 78, 34, 97, 22, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << "the sorted array is : " << arr[i] << " ";
    }
    cout << endl;
}