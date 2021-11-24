#include<iostream>
using namespace std;
int main(){
char sentence[100];
char temp = cin.get();
while(temp != '#'){
    cout<<temp;
    temp = cin.get();
}
return 0;
}