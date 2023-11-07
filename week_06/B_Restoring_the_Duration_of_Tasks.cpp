#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> (n);
        vector<int> s(n);
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        vector<int> f(n);
        for (int i = 0; i < n; i++)
        {
            cin >> f[i];
        }

        vector<int> ans(n);

        int head = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] >= head)
            {
                ans[i] = f[i] - s[i];
            }
            else
            {
                ans[i] = f[i] - head;
            }
            head = f[i];
        }

        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}