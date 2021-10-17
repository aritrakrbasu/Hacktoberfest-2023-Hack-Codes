// Author : Bharat Kumar
//Question Link : https://www.codechef.com/START13C/problems/MAGDOORS/

#include <bits/stdc++.h>
using namespace std;
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

int main()
{
    //Fast IO
    fast_cin();

    long long t;
    cin >> t;
    for (int it = 1; it <= t; it++)
    {
        string doors;
        cin >> doors;
        //This will take the input as a string
        int ans = 0;
        //we are initially taking the ans as 0

        int l = doors.length(); //this gives the length of the string

        if (doors[0] == '0')
        {
            ans++;
            //Here if the first door is already closed we have to open it first and we are writing it before because if the condition we will use next
        }

        //now as we have checked the first character we will check start checking from second to last
        //so we will iterate over the string letters
        for (int i = 1; i < l; i++)
        {
            //here the login is if the do we just crossed and the door we are going to cross if both are not closed or not open then we have to open the next door
            if (doors[i] != doors[i - 1])
            {
                ans++;
            }
            else
            {
                //if the door we crossed and the door which is coming are of same status in the string that means its open now and we can go
                continue;
            }
        }
        //Here we are printing the ans we got from above
        cout << ans << endl;
    }
    return 0;
}