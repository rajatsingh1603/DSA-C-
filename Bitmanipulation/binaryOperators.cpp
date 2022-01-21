#include<iostream>
using namespace std;

int main(){
    //bitwise AND (&) operator
    int a = 14;
    int b = 7;
    cout<<(a&b)<<endl;

    //bitwise OR (|) operator
    cout<<(a|b)<<endl;

    //bitwise XOR (^) operator
    cout<<(a^b)<<endl;

    //bitwise NOT (~) operator
    cout<<(~a)<<endl;
    cout<<(~b)<<endl;

    //imp point
    int c = 0;
    cout<<(~c)<<endl;
    

    return 0;
}