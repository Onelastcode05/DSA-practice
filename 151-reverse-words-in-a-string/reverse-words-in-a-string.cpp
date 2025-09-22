class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        int n = s.size();
        int i = 0;
        
        while (i < n && s[i] == ' ') i++;
        while (i < n) {
            string word = "";
            
            while (i < n && s[i] != ' ') {
                word += s[i++];
            }
            if (!word.empty()) words.push_back(word);
        
            while (i < n && s[i] == ' ') i++;
        }

        string ans = "";
        for (int j = words.size() - 1; j >= 0; --j) {
            ans += words[j];
            if (j != 0) ans += " ";
        }
        return ans;
    }
};