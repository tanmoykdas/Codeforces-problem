#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        int mx;
        mx = max(a,b);
        cout << mx << endl;
    }
}