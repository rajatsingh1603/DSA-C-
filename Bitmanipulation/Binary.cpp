#include<iostream>
using namespace std;

int to_Binary(int n){
    int ans = 0;
    int power = 1;
    while(n>0){
        int last = (n&1);
        
        
        ans += last*power;
        power = power*10;
        n = n>>1;
    }
    return ans;
    

}
int main(){
    int n;
    cin>>n;
cout<<to_Binary(n);
return 0;
}