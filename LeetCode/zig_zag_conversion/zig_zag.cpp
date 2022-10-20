/* problem:- https://leetcode.com/problems/zigzag-conversion/
The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

P   A   H   N
A P L S I I G
Y   I   R
And then read line by line: "PAHNAPLSIIGYIR"

Write the code that will take a string and make this conversion given a number of rows:

string convert(string s, int numRows);
 

Example 1:

Input: s = "PAYPALISHIRING", numRows = 3
Output: "PAHNAPLSIIGYIR"



*/


class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1) return s;
        vector<string> ans(numRows);
        int row=0;

        int i=0;
        while(i<s.size()){
            while(row<numRows && i<s.size()){
                ans[row]+=s[i];
                i++;
                row++;
                
            }
            row=row-2;
            while(row>=0 && i<s.size()){
                ans[row]+=s[i];
                i++;
                row--;
            }
            row=row+2;
        }
        string result="";
        for(auto it:ans){
            result=result+it;
            // cout<<it<<endl;
        }
        return result;
        
    }
};
