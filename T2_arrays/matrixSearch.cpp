#include <bits/stdc++.h>
using namespace std;
// rows and columns are sorted in this matrix
// can oly start from topmost right or bottommost left
int main()
{
    int n, m;
    cin >> n >> m;
    int target;
    cin >> target;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    }
    int r = 0, c = n - 1;
    bool found = 0;
    while (r < m && c >= 0)
    {
        if (a[r][c] == target)
        {
            found = 1;
        }
        if (a[r][c] > target)
        {
            c--;
        }
        else
        {
            r++;
        }
    }
    if (found)
    {
        cout << "elemnt found";
    }
    else
    {
        cout << "element not found";
    }
    return 0;
}