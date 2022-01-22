#include<iostream>
using namespace std;
void clearIthBit(int n,int x){
    int med = ~(1<<x);
    cout<<(n & med);
}
int main(){
int n = 13;
int x;
cin>>x;
clearIthBit(n,x);
return 0;
}