#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char a[n + 1];
    cin >> a;
    bool check = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != a[n - 1 - i])
        {
            check = 0;
            break;
        }
    }
    if (check == 1)
        cout << "palindrome";
    else
        cout << "not a palindrome";
    return 0;
}