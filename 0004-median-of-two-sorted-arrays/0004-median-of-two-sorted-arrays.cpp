class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        int n = nums1.size();
        int m = nums2.size();
        for(int i=0;i<n;i++){
            ans.push_back(nums1[i]);
        }
        for(int i=0;i<m;i++){
            ans.push_back(nums2[i]);
        }
        if((n+m) == 0){
            return 0;
        }
        if((n+m) == 1){
            return ans[0];
        }
        sort(ans.begin(),ans.end());
        int t = (n+m)/2;
        double t2 = (double)(ans[t] + ans[t-1])/2;
        if((n+m)%2 != 0 ){
            return ans[t];
        }
        else{
            return t2;
        }
    }
};