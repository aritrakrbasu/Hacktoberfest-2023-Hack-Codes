#include<bits/stdc++.h>
using namespace std;

#define ll long long

bool cmp(pair<string, ll>& a,
         pair<string, ll>& b)
{
    return a.second < b.second;
}

void sort(map<string,ll> &M)
{
    vector<pair<string, ll> > A;
  
    for (auto& it : M) {
        A.push_back(it);
    }
  
    sort(A.begin(), A.end(), cmp);
  
    for (auto& it : A) {
  
        cout <<it.second<< ' ';
    }
}

void solve(){
	ll n;
	cin>>n;
	map<string,ll> map;
	for(ll i=0;i<3*n;i++){
		string str;
		ll x;
		cin>>str>>x;
		if(map.find(str)==map.end())
			map.insert(make_pair(str,x));
		else
			map[str]+=x;
	}
	sort(map);
	cout<<endl;
}

int main(){
	ll t;
	cin>>t;
	while(t--)
		solve();
}