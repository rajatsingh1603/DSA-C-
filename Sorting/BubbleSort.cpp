#include<iostream>
using namespace std;
void bubble_sort(int arr[],int n){
    for(int i = 0; i<n; i++){
        for(int j= 0;j<=n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main(){
int arr[] = {-9,1,8,3,6,5,2,-1,-3};
int n = sizeof(arr)/sizeof(int);
bubble_sort(arr,n);
for(int i = 0; i<n; i++){
    cout<<arr[i]<<" ";
}
return 0;
}