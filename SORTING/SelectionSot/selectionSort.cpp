// Selection Sort
//  select the smallest one from the arrray and put into first
//  no swapping in this method 
//  one element as the min
#include <iostream>
using namespace std;
void  selSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++)
    {
        int min = arr[0];
        for(int j = i+1; i<n-1; j++){
            if(arr[j] < min){
                min = j;
        }
        
    }
          int temp = arr[min];
          arr[min] = arr[i];
          arr[i] = temp;
    }
   
}
int main(){
    int n = 6;
    int arr[n] = {12, 78, 34, 97, 22, 10};
    selSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}