#include <bits/stdc++.h>
using namespace std;
int getbits(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}
int main()
{
    cout << getbits(5, 2) << endl;

    return 0;
}
