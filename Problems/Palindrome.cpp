#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[1000];
    cin.getline(a, 1000);
    int l = 0;
    int h = strlen(a) - 1;

    while (h > l)
    {
        if (a[l++] != a[h--])
        {
            cout << "Not a Palindrome";
        }
    }
    cout << "A Palindrome";

    return 0;
}