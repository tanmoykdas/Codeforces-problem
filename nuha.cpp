#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        for (int j = s.size() - 1; j >= 0; j--)
        {
            cout << s[j] << " ";
        }
        cout << endl;
    }
}