********QUESTION************
#1002.Find Common Charatcter
Given a string array words, return an array of all characters that show up in all strings within the words (including duplicates). You may return the answer in any order.

*********SOLUTION*********
class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int> min_freq(26, INT_MAX);
        for (auto& word : words) {
            vector<int> freq(26, 0);
            for (char c : word) {
                freq[c - 'a']++;
            }
            for (int i = 0; i < 26; ++i) {
                min_freq[i] = min(min_freq[i], freq[i]);
            }
        }

        vector<string> result;
        for (int i = 0; i < 26; ++i) {
            while (min_freq[i]-- > 0) {
                result.push_back(string(1, i + 'a'));
            }
        }
        return result;
    }
};
