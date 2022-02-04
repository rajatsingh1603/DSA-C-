#include <iostream>
using namespace std;

int expo(int a, int n)
{
    int ans = 1;
    while (n > 0)
    {
        int last = (n & 1);
        if (last)
        {
            ans = ans * a;
        }
        a = a * a;
        n = n >> 1;
    }
    return ans;
}
int main()
{
    int a, n;
    cin >> a >> n;
    cout << expo(a, n)<<endl;
    return 0;
}