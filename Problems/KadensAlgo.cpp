#include<iostream>
#include<vector>
using namespace std;
int KadensAlgo(vector<int> arr){
    int cs =0 ;
    int ls = 0;
    for(int i = 0;i <arr.size();i++){
        cs = cs+ arr[i];
        if(cs <0){
            cs = 0;
        }
        ls= max(ls,cs);
    }

    return ls;
}
int main(){
vector<int> arr ={1,2,3,4,5,6};
return 0;
}