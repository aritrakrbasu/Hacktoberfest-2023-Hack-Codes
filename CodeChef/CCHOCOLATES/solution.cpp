// author: Kankona Chowdhury

#include <iostream>
using namespace std;

int main() {
    int t=0;
    cin>>t;
    while(t--)
    {
        int x,y,z,temp;
        cin>>x>>y>>z;
        temp=5*x+10*y;
        cout<<temp/z<<endl; 
    }
	return 0;
}