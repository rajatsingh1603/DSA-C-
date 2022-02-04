#include<iostream>

int recursion(int n){
    //base case
    if(n == 0 || n == 1){
        return 1;
    }
    else{
        //recursion case
        return n*recursion(n-1);
    }
}
using namespace std;
int main(){
    int n;
    cin>>n;
cout<<recursion(n);
return 0;
}