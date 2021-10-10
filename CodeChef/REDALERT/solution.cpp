#include <bits/stdc++.h>
#define loop(a) for(int i=0;i<a;i++)
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,d,h;
        int k=0;
        string ans = "NO";
        cin>>n>>d>>h;
        int arr[n];
        loop(n){
            cin>>arr[i];
        }
        loop(n){
            if( arr[i]>0){
                k+= arr[i];
            }
            else{
                k = max(k-d,0);
            }
            if(k>h){
                ans = "YES";
                break;
            }
        }
      cout<<ans<<endl;
 
    }
}