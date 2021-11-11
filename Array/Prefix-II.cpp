#include<iostream>
using namespace std;

int Prefix(int arr[] , int n){
    //prefix array
    int prefix[100]= {0};
    prefix[0] = arr[0];
    for(int i = 1 ; i<n; i++){
        prefix[i] = prefix[i-1] + arr[i];
    }

    int largest_sum = 0;
    int sum;
        //logic
    for(int i = 0; i<n ;i ++){
        for(int j = i; j<n; j++){
                sum = i>0 ? prefix[j] - prefix[i-1] : prefix[j];
                largest_sum = max(largest_sum,sum);
        }
    }

    return largest_sum;
}
int main(){
int arr[] = {1,2,4,4,5,6,7};
int n = sizeof(arr)/sizeof(int);
cout<<Prefix(arr,n);
return 0;
}