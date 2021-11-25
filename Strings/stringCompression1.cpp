#include<iostream>
#include<vector>
using namespace std;
int main(){
string s;
getline(cin,s);
vector<char> ans;
for(int i = 0; i<s.length(); i++){
    if(s[i] != s[i+1]){
        ans.push_back(s[i]);
    }

}

for(int i =0; i<ans.size() ; i++){
    cout<<ans[i];
}

return 0;
}