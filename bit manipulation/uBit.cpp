#include <bits/stdc++.h>
using namespace std;
int upbit(int n, int pos, int value)
{
    int mask = ~(1 << pos);
    n = n & mask;
    return (n | (value << pos));
}
int main()
{
    cout << upbit(5, 1, 1) << endl;
    return 0;
}