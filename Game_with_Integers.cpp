#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] % 3 == 0)
        cout << "Second" << endl;
        else
        cout << "First" << endl;
    }
}