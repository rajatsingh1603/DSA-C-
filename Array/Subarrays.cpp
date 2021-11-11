#include<iostream>
using namespace std;
void printSubarrays(int arr[],int n){
   
    for(int i = 0; i<n; i++){
        for(int j = i; j<n; j++){
            // int sum = 0;
            for(int k = i; k<=j; k++){
                // sum = sum + arr[k]; {for finding the sum of subarrays}
                cout<<arr[k]<<",";

            }
            // cout<<sum;
            cout<<endl;
        }
    }
}
int main(){
int arr[] = {10,20,30,40,50,60};
int n = sizeof(arr)/sizeof(int);
printSubarrays(arr,n);
return 0;
}