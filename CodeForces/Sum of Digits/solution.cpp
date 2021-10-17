#include <bits/stdc++.h>
using namespace std;

/*In this problem Gerald can use a spell to find sum of digits of a given 
number till it becomes 1 digit
*/
int main() {

   /*as we are given input value too large so we take it input as a string*/
   string n;
   int spells=0,sum=0;//initialized spells used to 0 and the current sum to 0
   cin>>n;

   //running loop till we get a 1 digit number
   while(n.length()!=1){
    for (int i = 0; i < n.length(); ++i)//calculating the sum of digits 
        sum+=(n[i]-48);//here we also convert character to number by substracting by 48

    n=to_string(sum);//updating new n with sum (converting int to string)
    spells++;//updating number of spells used
    sum=0;//reset the sum for next n
   }

   cout<<spells<<endl;//printing total spells used

}