/*Given a string s, find the length of the longest 
substring
 without repeating characters.

 

Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3.*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        vector<int> position(128, -1);
        int ans = 0;
        
        for(int i = 0, j = 0; j < n; j++){
            if(position[s[j]] != -1){
                i = max(i, position[s[j]]+1);
            }
            ans = max(ans, j-i+1);
            position[s[j]] = j;
        }
        
        return ans;
    }
};
