class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size(); 
        int cnt = 0;
        int sum = 0;

        unordered_map<int,int>mp;
        
        mp[sum] = 1;
        for(int i=0;i<n;i++){
            sum += nums[i];
            int find = sum - k;

            if(mp.find(find) != mp.end()){
                cnt += mp[find];
            }
            mp[sum]++;  
        }
        return cnt;
    }
};