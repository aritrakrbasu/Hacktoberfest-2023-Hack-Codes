#include <bits/stdc++.h>
using namespace std;

#define w(t) int t;cin>>t;while(t--)

int main(){
    w(t){
    	float risk=0,non_risk=0;
    	int risk_days,non_risk_days,n,d,age[10000];
        cin>>n>>d;
        for(int i=0;i<n;i++){
            cin>>age[i];
            // cout<<"age"<<i<<"is"<<age[i]<<endl;
            if(age[i]>=80 || age[i]<=9){
                risk++;
            }
            else 
            non_risk++;
        }
        // cout<<"no of risk patients is"<<risk<<endl;
        // cout<<"no of non risk patients is"<<non_risk<<endl
        risk_days=ceil(risk/d);
        non_risk_days=ceil(non_risk/d);
        std::cout << risk_days+non_risk_days << std::endl;
    }
	return 0;
}
