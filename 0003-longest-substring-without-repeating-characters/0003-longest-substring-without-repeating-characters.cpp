class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        vector<int>v(256,-1);
        int maxi = 0 , start = -1;
        for(int i=0;i<n;i++){
            if(v[s[i]] > start){
                start = v[s[i]];
            }
            v[s[i]] = i;
            maxi = max(maxi, i-start);
        }
        return maxi;
    }
};