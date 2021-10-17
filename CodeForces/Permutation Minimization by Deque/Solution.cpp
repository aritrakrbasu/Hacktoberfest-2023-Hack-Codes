#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        deque <int> v;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(i==0)
            v.push_back(x);

            int x1=v[0];
            int x2=v[v.size()-1];
            if(i!=0)
            {
                if(x==x1)
                v.push_front(x);
                else if (x==x2)
                v.push_back(x);
                if(x<x1 && x<x2)
                {
                   v.push_front(x);
                }

                else if(x>x2 && x>x1)
                v.push_back(x);
                else if(x>x1 && x<x2)
                v.push_back(x);
                else if (x >x2 && x<x1)
                v.push_front(x);

            }

        }
           for(auto it =v.begin();it!=v.end();it++)
            cout<<(*it)<<" ";

            cout<<endl;

    }
}
