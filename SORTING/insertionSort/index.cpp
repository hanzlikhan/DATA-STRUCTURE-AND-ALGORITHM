#include <iostream>
using namespace std;
void insertion(int arr[],int n){
    for(int i = 1; i<n;i++){
        int curr = arr[i];
        int prev = i-1;
        while (prev>=0 && arr[prev]>curr)
        {
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = curr;
         
    }
}
void print(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    

}
int main(){
    int arr[] = {12,67,32,90,77,15};
    int n = 6;
    insertion(arr,n);
    print(arr,n);
}