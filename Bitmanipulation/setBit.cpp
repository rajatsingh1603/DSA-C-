#include<iostream>
using namespace std;
void setIthBit(int &n, int x){
    int med = (1<<x);
    n = (n | med);
}
int main(){
int n = 5;
int x;
cin>>x;
setIthBit(n,x);
cout<<n;
return 0;
}