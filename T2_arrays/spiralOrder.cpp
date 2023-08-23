#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    }
    int rowstart = 0, rowend = n - 1, colstart = 0, colend = m - 1;
    while (rowstart <= rowend && colstart <= colend)
    {
        // for row start
        for (int col = colstart; col <= colend; col++)
        {
            cout << a[rowstart][col] << " ";
        }
        rowstart++;
        // for column end
        for (int row = rowstart; row <= rowend; row++)
        {
            cout << a[row][colend] << " ";
        }
        colend--;
        // for row end
        for (int col = colend; col >= colstart; col--)
        {
            cout << a[rowend][col] << " ";
        }
        rowend--;
        // for column start
        for (int row = rowend; row >= rowstart; row--)
        {
            cout << a[row][colstart] << " ";
        }
        colstart++;
    }
    return 0;
}
