#include<iostream>
using namespace std;
void clearBits(int &n, int x){
    int mask = (-1<<x);
    n = n & mask;
}
int main(){
int n = 15;
int x;
cin>>x;
clearBits(n,x);
cout<<n;
return 0;
}