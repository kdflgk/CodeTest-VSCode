#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int num;
    cin >> num;
    
    int s = 0;

    for (int i = 0; i < num; i++)
    {
        string function;
        int value;
        cin >> function;

        if (function == "add")
        {
            cin >> value;
            s = s | (1 << value);
        }
        else if (function == "remove")
        {
            cin >> value;
            s = s & ~(1 << value);
        }
        else if (function == "check")
        {
            cin >> value;
            if (s & (1 << value))
                cout << "1\n";
            else
                cout << "0\n";
        }
        else if (function == "toggle")
        {
            cin >> value;
            s = s ^ (1 << value);
        }
        else if (function == "all")
        {
            s = s | (1 << 21) - 1;
        }
        else if (function == "empty")
        {
            s = 0;
        }
    }

    return 0;
}