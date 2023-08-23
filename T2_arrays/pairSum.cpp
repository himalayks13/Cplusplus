#include <bits/stdc++.h>
using namespace std;
// sort thr array and then compare the sum of highest and lowest with k and then increse or decrease the index of high or low accordingly
bool pairsum(int a[], int n, int k)
{
    int low = 0, high = n - 1;
    while (low < high)
    {
        if (a[low] + a[high] == k)
        {
            cout << low << " " << high << endl;
            return 1;
        }
        else if (a[low] + a[high] > k)
        {
            high--;
        }
        else
        {
            low++;
        }
    }
    return 0;
}

int main()
{
    int a[] = {2, 4, 7, 11, 14, 16, 20, 21};
    int k = 31;
    cout << pairsum(a, 8, k) << endl;
    return 0;
}