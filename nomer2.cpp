#include <iostream>

using namespace std;

int main()
{
    int n = 12;
    for (int i = 1; i <= n; i++)
    {
        cout << "1";
        for (int j = n; j > i; j--)
        {
            cout << "0";
        }
        cout << endl;
    }
    return 0;
}
