class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        
        queue<string> q;
        unordered_set<string> notSeen; 
        
        for (string s : wordList) {
            notSeen.insert(s);
        }
        
        if (notSeen.count(endWord) > 0) {
            q.push(endWord);
        }
        else return 0; 
        
        int length = 0;
        

        while (!q.empty()) {
            int size = q.size();
            length++;
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < beginWord.length(); j++) {
                    string front = q.front();
                    for (char c = 'a'; c <= 'z'; c++) {
                        front[j] = c; 
                        
                        if (front == beginWord) return length + 1;
						
                        if (notSeen.count(front) > 0) {
                            q.push(front);
                            notSeen.erase(front);
                        }
                    }
                }
                q.pop(); 
            }
        }
        return 0; 
    }
};