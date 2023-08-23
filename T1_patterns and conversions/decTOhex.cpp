#include <bits/stdc++.h>
using namespace std;
string decTOhex(int n)
{
    string ans = " ";
    int x = 1;

    while (x <= n)
    {
        x *= 16;
    }
    x /= 16;
    while (x > 0)
    {
        int lastd = n / x;
        n -= lastd * x;
        x /= 16;
        if (lastd <= 9)
        {
            ans = ans + to_string(lastd);
        }
        else
        {
            char c = 'A' + lastd - 10;
            ans.push_back(c);
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << decTOhex(n) << endl;
}