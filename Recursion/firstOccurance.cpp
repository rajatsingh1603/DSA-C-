#include<iostream>
using namespace std;

int firstOccurance(int arr[], int key, int n){
    //base condition
    if(n == 0){
        return -1;
    }
    //recursive condition
    if(arr[0] == key){
        return 0;
    }
    int ans = firstOccurance(arr+1,key,n-1);
    if(ans != -1){
        return ans +1;
    }
    else{
        return -1;
    }
}
int main(){
int arr[] = {1,2,3,4,5,7};
int key;
cin>>key;
int n = 6;
cout<<firstOccurance(arr,key,n);
return 0;
}