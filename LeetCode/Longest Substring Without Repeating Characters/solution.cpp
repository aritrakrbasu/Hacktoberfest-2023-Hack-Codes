//author: Harsh Modi
//Question Link: https://leetcode.com/problems/longest-substring-without-repeating-characters/

class Solution {
public:
    int lengthOfLongestSubstring(string str) 
    {
        int n = str.size();
        
        //length of the longest substring w/o repeatations
        int mxlen = 0;
        
        //start and end index of the said substring (0-based indexing)
        int s = 0, e = 0;
        
        //frequency map using array of size 256 since the string- 
        //consists of english letters, digits, symbols and spaces.
        int freq[256];
        
        //initally each character has 0 frequency
        memset(freq, 0, sizeof(freq));
        
        //traversing the string
        while (e<n)
        {
            
            //We found a duplicate.
            //i.e. we are trying to incorporate str[e] into our substring
            //but it already exists
            while (s<e && freq[str[e]] > 0)
            {
                //remove characters from the start of the substring
                freq[str[s]]--;
                s++;
            }
            
            //update max. length
            mxlen = max(mxlen, e-s+1);
            
            //add current element
            freq[str[e]]++;
            
            e++;
        }
        
        return mxlen;    
    }
};

// Time complexity: O(N) where N = length of the input string as we are traversing the string at most 2 times.

// Space complextiy: O(256) as we are using a frequency array of that size