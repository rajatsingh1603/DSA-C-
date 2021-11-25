#include<iostream>
#include<vector>
using namespace std;
int main(){
// string s = "Hello World";
// cout<<s<<endl;

// string s("Hello World");
// cout<<s<<endl;

// string s;
// getline(cin,s);
// cout<<s<<endl;

// string s;
// getline(cin,s,'.');
// cout<<s<<endl;
int n;
cin>>n;
cin.get();
vector<string> s;
string m;
while(n--){
    getline(cin,m);
    s.push_back(m);
    

}

for(string x: s){
    cout<<x<<","<<endl;
}



return 0;
}