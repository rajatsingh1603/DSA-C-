#include<iostream>
using namespace std;
int main(){
int x = 10;
cout<<&x<<endl;
int *xptr = &x; //pointer holding the address of x
cout<<xptr<<endl;
cout<<&xptr<<endl;

//storing the address of a pointer in a pointer
int ** xxptr = &xptr;
cout<<xxptr<<endl;
return 0;
}