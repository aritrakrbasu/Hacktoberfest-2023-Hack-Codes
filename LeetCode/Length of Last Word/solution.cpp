class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string word;
        while (ss >> word) {
        }
        cout<<word<<endl;
        return word.length();
    }
};