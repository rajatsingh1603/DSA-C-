#include <iostream>
using namespace std;
int binary_search(int arr[], int n, int key)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int key;
    cin >> key;
    int n = sizeof(arr) / sizeof(int);
    int result = binary_search(arr, n, key);

    if (result != -1)
    {
        cout << key << " is present at index " << result;
    }
    else
    {
        cout << "Element not found!!" << endl;
        
    }
    return 0;
}