#include<iostream>
#include<vector>
using namespace std;

int largest_element(vector<int> arr){
    int max = 0;
    for(int i =0; i<arr.size(); i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main(){
vector<int> arr = {1,2,4,6,9,2,7};
cout<<largest_element(arr);

return 0;
}