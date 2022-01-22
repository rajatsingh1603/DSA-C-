#include<iostream>
using namespace std;
void updateBit(int &n, int x, int v){
    n = n & ~(1<<x);
    int mask = (v<<x);
    n = n | mask;
}
int main(){
int n = 13;
int x;
cin>>x;
int v;
updateBit(n,x,1);
cout<<n;
return 0;
}