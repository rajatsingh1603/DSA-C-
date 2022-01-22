#include <iostream>
using namespace std;

void getIthBit(int n, int i)
{
    if ((n & (1 << i)) > 0)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "0" << endl;
    }
};
int main()
{
    int n = 5;
    int i;
    cin >> i;
    getIthBit(n, i);
    return 0;
}