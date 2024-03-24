#include<iostream>
using namespace std;
void counting(int arr[]){
    
}

    
int main(){
    int arr[] = {12,78,33,56,23,86};
    counting(arr);
}
public class index{
    public void main(String[] args){
        public static void counting(int arr[]){
            int large = Integer.MIN_VALUE;
            for (int i=0 ;i<arr.length; i++) { 
                large = Math.max(large,arr[i]);
            }
            int count[]  = new int[large+1];
            for(int i=0;i<arr.length;i++){
                count[arr[i]]++;
            }
            int j = 0;
            for(int i=0;i<count.length;i++ ){
                while(count[i]>0){
                    arr[j]=i;
                    j++;
                    count[i]--;
                }
        }

    }
}
}