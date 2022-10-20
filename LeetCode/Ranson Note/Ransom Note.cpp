//Question Link : https://leetcode.com/problems/ransom-note/
//Question Name : 383. Ransom Note
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int c=0;
        for(int i=0;i<ransomNote.length();i++){
            for(int j=0;j<magazine.length();j++){
                if(ransomNote[i]==magazine[j]){
                    c++;
                    magazine[j]='0';
                    break;
                }
            }
        }
        
        if(c==ransomNote.length())
            return 1;
        else
            return 0;
    }
};
