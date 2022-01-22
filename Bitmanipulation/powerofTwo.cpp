#include<iostream>
using namespace std;
int main(){
int n; 
cin>>n;
if((n & n-1) == 0){
    cout<<"Power of two"<<endl;
}
else{
    cout<<"Not Power of two";
}
return 0;
}