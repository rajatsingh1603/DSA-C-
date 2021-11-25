#include<iostream>
using namespace std;
void compress(string s){
    int n = s.length();
    string ans;
    for(int i =0; i<n; i++){
        int count = 1;
        while(i<n && s[i+1] == s[i]){
            count++;
            i++;
        }
        ans += s[i];
        ans += to_string(count);
    }
    if(ans.length() > s.length()){
        cout<<s;
    }
    cout<<ans;
}
int main(){
string s = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabbbcc";
compress(s);

return 0;
}