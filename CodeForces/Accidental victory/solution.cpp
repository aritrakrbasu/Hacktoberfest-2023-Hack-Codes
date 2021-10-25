#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
 
int main()
{
 
    IOS;
    int t;
    cin >> t;
    // t = 1;
 
    while (t--)
    {
        ll n;
        cin >> n;
 
        vector<pair<ll, ll>> vecpr;
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            ll num;
            cin >> num;
            vecpr.push_back({num, i + 1});
            sum += num;
        }
 
        sort(vecpr.begin(), vecpr.end());
        vector<ll> ans;
 
        ans.push_back(vecpr[n - 1].second);
        sum -= vecpr[n - 1].first;
 
        for (ll i = n - 2; i >= 0; i--)
        {
            if (sum >= vecpr[i + 1].first)
            {
                ans.push_back(vecpr[i].second);
                sum -= vecpr[i].first;
            }
 
            else
                break;
        }
 
        cout << ans.size() << endl;
        sort(ans.begin(), ans.end());
 
        for (ll i = 0; i < ans.size(); i++)
            cout << ans[i] << " ";
 
        cout << "\n";
    }
    return 0;
}