#include <bits/stdc++.h>

using namespace std;

#define lli long long int

int main() {

	ios_base::sync_with_stdio(false);    cin.tie(NULL);

    cout.tie(NULL);

    

    int t;

    cin>>t;

    while(t--)

    {

        lli n,m,sum=0;

        cin>>n>>m;

        vector<pair<int,int>> pairs;

        

        for(lli i=0;i<m;i++)

        {

            lli x,y;

            cin>>x>>y;

            pairs.push_back({x,y});

        }

        

        sort(pairs.begin(), pairs.end(), greater<pair<int,int>>());

        

        lli y_opt=1,a=n;

        for(lli i=0;i<m && a>0;i++)

        {

            lli x= pairs[i].first, y=pairs[i].second;

            y_opt= y_opt*y / __gcd(y_opt,y);

            sum+= (a- n/y_opt)*x;

            a= n/y_opt;

        }

        cout<<sum<<"\n";

    }

	return 0;

}
