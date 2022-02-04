#include<iostream>
using namespace std;

bool isSorted(int arr[], int n){
    //base case
    if(n==1 || n==0){
        return true;
    } 

    //recursion case
    if((arr[0] < arr[1]) && isSorted(arr+1,n-1)){
        return true;
    }
    else{
        return false;
    }
}
int main(){
int arr[] = {1,2,9,4,5,6,7};
int n ;
cin>>n;
cout<<isSorted(arr,n);
return 0;
}