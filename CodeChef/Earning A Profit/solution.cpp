#include <bits/stdc++.h>
#include <algorithm>
#define ll long long int
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

using namespace std;

// void solve()
// {

// }
//int c_[n];

int main()
{
    //fast;

    int t;
    cin >> t;

    while (t--)
    {
        // solve();
        int n;

        int a;
        cin >> n >> a;
        int c[n + 1] = {0};
        int d[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> c[i] >> d[i];
            c[i] += c[i - 1];
        }
        int final = 0, profit;
        for (int i = 1; i <= n; i++)
        {
            int mind = d[i], maxd = d[i];

            for (int j = i; j <= n; j++)
            {
                mind = min(mind, d[j]);
                maxd = max(maxd, d[j]);
                profit = a * (j - i + 1) - (c[j] - c[i - 1]) - ((maxd - mind) * (maxd - mind));
                final = max(final, profit);
            }
        }
        cout << final << "\n";
    }

    return 0;
}