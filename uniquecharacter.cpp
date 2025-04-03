class Solution {
public:
    int firstUniqChar(std::string s) {
        std::unordered_map<char, int> freq;

        
        for (char c : s) {
            freq[c]++;
        }

       
        for (int i = 0; i < s.length(); i++) {
            if (freq[s[i]] == 1) {
                return i;
            }
        }

        return -1; 
    }
};
