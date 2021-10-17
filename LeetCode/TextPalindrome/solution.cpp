/*Author : SASHWAT12*/

#include <bits/stdc++.h>
using namespace std;
bool isAlphaNum(char c)
{
    if( (48<=c && c<=57) || (65<=c && c<=90) || (97<=c && c<=122)) 
        return true;
    return false;
}
    
char lowerCase(char c)
{
    if(65<=c && c<=90)
        return c+32;
    else 
        return c;
}
    
bool isPalindrome(string s) 
{
    string input;
    for(char c:s)
    {
        if(isAlphaNum(c))
            input+= lowerCase(c);
    }
    string reversed=input;
    reverse(reversed.begin(),reversed.end());
    if(input==reversed) return true;
    else return false;
}
int main() 
{
    string s="A man, a plan, a canal: Panama";
    if(isPalindrome(s))
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;
  return 0; 
}
