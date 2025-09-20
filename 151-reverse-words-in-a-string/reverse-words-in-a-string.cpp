class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        vector<string> words;

        // Extract words (stringstream ignores extra spaces automatically)
        while (ss >> word) {
            words.push_back(word);
        }

        // Reverse the words
        reverse(words.begin(), words.end());

        // Join with spaces
        string ans = "";
        for (int i = 0; i < words.size(); i++) {
            if (i > 0) ans += " ";
            ans += words[i];
        }

        return ans;
    }
};
