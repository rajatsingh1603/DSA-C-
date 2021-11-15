#include<iostream>
using namespace std;
void insertion_sort(int arr[],int n){
    for(int i = 1;i<=n-1;i++){
        int current = arr[i];
        int prev = i-1;
        while(prev>=0 && arr[prev]>current){
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = current;
    }
}
int main(){
int arr[] = {-9,1,8,3,6,5,2,-1,-3};
int n = sizeof(arr)/sizeof(int);
insertion_sort(arr,n);
for(int i = 0; i<n; i++){
    cout<<arr[i]<<" ";
}
return 0;
}