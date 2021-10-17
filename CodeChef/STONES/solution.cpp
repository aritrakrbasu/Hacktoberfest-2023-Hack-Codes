//Author: Shramana
#include "bits/stdc++.h"
using namespace std;


int main(){

    int t;
    cin>>t;
    //Talking test case inpput
    while(t--){

        //Talking String inpput [1 <= |J|, |S| <= 100]
        string j,s;
        //j is for jewels
        //s is for stones

        cin>>j>>s;

        int p=0;
        for(int i=0;i<s.length();i++){
            for(int k=0;k<j.length();k++){

                if(s[i]==j[k]){     //Checking each j with s
                    p++;            // if true count by 1;
                    break;
                }
            }
        }
        cout<<p<<endl;
    }
    return 0;
}