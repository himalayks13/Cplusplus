#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    /*  //BRUTE FORCE METHOD
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += a[k];
            }
            maxSum = max(maxSum, sum);
        }
    }
    cout << maxSum << endl;
    */
    /*
     int cursum[n + 1];
     cursum[0] = 0;
     for (int i = 1; i <= n; i++)
     {
         cursum[i] = cursum[i - 1] + a[i - 1];
     }
     int maxsum = INT_MIN;
     for (int i = 1; i <= n; i++)
     {
         int sum = 0;
         for (int j = 0; j < i; j++)
         {
             sum = cursum[i] - cursum[j];
             maxsum = max(sum, maxsum);
         }
     }
     cout << maxsum << endl;
     */
    int currentsum = 0;
    int maxsum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currentsum += a[i];
        if (currentsum < 0)
        {
            currentsum = 0;
        }
        maxsum = max(maxsum, currentsum);
    }
    cout << maxsum << endl;
    return 0;
}