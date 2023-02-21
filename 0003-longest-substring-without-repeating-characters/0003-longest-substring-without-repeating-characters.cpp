class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int ans = 0;
        unordered_map<char, int> map;
        int j = 0;
        for (int i = 0; i < n; i++) {
            if (map.count(s[i])) {
                j = max(j, map[s[i]] + 1);
            }
            map[s[i]] = i;
            ans = max(ans, i - j + 1);
        }
        return ans;
    }
};
