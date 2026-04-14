class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> v1(n, 1);
        vector<int> v2(n, 1);

        int num = 1;
        for(int i=0;i<n;i++) {
            if(i==0) {
                v1[i] = num;
            } else {
                num = num*nums[i-1];
                v1[i] = num;
            }
        }
        num = 1;
        for(int i = n-1;i>=0;i--) {
            if(i==n-1) {
                v2[i] = num;
            } else {
                num = num*nums[i+1];
                v2[i] = num;
            }
        }
        vector<int> ans;
        for(int i=0;i<n;i++) {
            ans.push_back(v2[i]*v1[i]);
        }
        return ans;
    }
};
