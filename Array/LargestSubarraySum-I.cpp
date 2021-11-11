#include<iostream>
using namespace std;
int SumofLargestSubarray(int arr[], int n){
    int largest = 0;
    for(int i =0; i<n; i++){
        for(int j = i; j<n; j++){
            int sum = 0;
            for(int k =i; k<=j;k++){
                sum += arr[k];
            }
            largest = max(largest,sum);

        }
    }
    return largest;
}
int main(){
int arr[] = {-2,3,4,-1,5,-12,6,1,3};
int n = sizeof(arr)/sizeof(int);
cout<<SumofLargestSubarray(arr,n);
return 0;
}