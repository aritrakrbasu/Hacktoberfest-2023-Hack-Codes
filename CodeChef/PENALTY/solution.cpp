#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long t;
  cin>>t;
  while(t--)
  {
      int arr[10],sumA=0, sumB=0;
      for(int i=1;i<=10;i++) {
          cin >> arr[i];
      }
      for(int i=1;i<=10;i=i+2) {
          sumA += arr[i];
      }
      for(int i=2;i<=10;i=i+2) {
          sumB += arr[i];
      }
      if(sumA == sumB) {
          cout << 0 << endl;
      }
      if(sumA > sumB) {
          cout << 1 << endl;
      }
      if(sumA < sumB) {
          cout << 2 << endl;
      }
  }
  return 0;
}