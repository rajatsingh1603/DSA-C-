#include<iostream>
using namespace std;
void print (int arr[][100],int n, int m){
    for(int i =0; i<n; i++){
        for(int j= 0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n,m;
    cin>>n>>m;
int arr[100][100];
for(int i = 0; i<n; i++){
    for(int j =0; j<m;j++){
        cin>>arr[i][j];
    }
}
print(arr,n,m);
return 0;
}