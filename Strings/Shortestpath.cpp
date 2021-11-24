#include <iostream>
using namespace std;
int main()
{
    char path[100];
    cin.getline(path, 1000);
    int x = 0;
    int y = 0;
    for (int i = 0; path[i] != '\0'; i++)
    {

        switch (path[i])
        {
        case 'N':
            y++;
            break;
        case 'E':
            x++;
            break;
        case 'W':
            x--;
            break;
        case 'S':
            y--;
            break;
        }

        
    }

    cout << x << " " << y;

    if (x >= 0 && y >= 0)
    {
        while (y--)
        {
            cout << "N";
        }
        while (x--)
        {
            cout << "E";
        }
    }

    return 0;
}