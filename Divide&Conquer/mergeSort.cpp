#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int s, int e)
{
    
    int i = s;
    int mid = (s + e) / 2;
    int j = mid + 1;
    vector<int> temp;

    while (i <= mid && j <= e)
    {
        if (arr[i] < arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }
    while (j <= e)
    {
        temp.push_back(arr[j]);
        j++;
    }
    int k = 0;
    for (int in = s; in <= e; in++)
    {
        arr[in] = temp[k++];
    }
    return;
}

void mergeSort(vector<int> &arr, int s, int e)
{

    //base case
    if (s >= e)
    {
        return;
    }
    //recc case
    int mid = (s + e) / 2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    return merge(arr, s, e);
}
int main()
{
    vector<int> arr = {9, 5, 1, 4, 6, 0, 2, 7, 3, 8};
    int s = 0;
    int e = arr.size() - 1;
    mergeSort(arr, s, e);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}