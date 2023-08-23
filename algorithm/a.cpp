#include <bits/stdc++.h>
using namespace std;
string get_common_prefix(vector<string> names)
{
    int n = names.size();
    string prefix = "";
    for (int i = 0; i < n; i++)
    {
        string name = names[i];
        int m = name.size();
        for (int j = 1; j <= m; j++)
        {
            string current_prefix = name.substr(0, j);
            bool flag = true;
            for (int k = 0; k < n; k++)
            {
                if (k == i)
                    continue;
                if (names[k].substr(0, j) != current_prefix)
                {
                    flag = false;
                    break;
                }
            }
            if (flag && current_prefix.size() > prefix.size())
            {
                prefix = current_prefix;
            }
        }
    }
    return prefix;
}
int main()
{
    int n;
    cin >> n;
    vector<string> names(n);
    for (int i = 0; i < n; i++)
    {
        cin >> names[i];
    }
    string town_name = get_common_prefix(names);
    if (town_name != "")
    {
        cout << town_name << endl;
    }
    return 0;
}