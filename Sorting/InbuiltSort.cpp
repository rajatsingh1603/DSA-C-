#include<iostream>
#include<algorithm>
using namespace std;
int main(){
int arr[] = {-9,1,8,3,6,5,2,-1,-3};
int n = sizeof(arr)/sizeof(int);
sort(arr,arr+n);
cout<<arr;
for(int i = 0; i<n; i++){
    cout<<arr[i]<<" ";
}
return 0;
}