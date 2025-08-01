#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Dynamic program
    // Bottom up approach

    int n, a, b, c;
    cin >> n >> a >> b >> c;

    // considering a table with 0 index

    int dp[n + 1];
    dp[0] = 0;
    int x, y, z;

    for (int i = 1; i <= n; i++)
    {
        x = INT_MIN;
        y = INT_MIN;
        z = INT_MIN;
        cout<< "x=" << x << " "
            << "y=" << y << " "
            << "z=" << z << "\n";
        if (i >= a)
            x = dp[i - a];
        if (i >= b)
            y = dp[i - b];
        if (i >= c)
            z = dp[i - c];

        dp[i] = 1 + max(z, max(x, y));
        cout << dp[i] << " " << x << " " << y << " " << z << "\n";
    }
    cout << dp[n];
}