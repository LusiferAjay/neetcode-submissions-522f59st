class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        vector<int> ans;
        bool flag = false;
        for(int i=0;i<n;i++) {
            int num = numbers[i];
            int l = i+1;
            int r = n-1;
            int t = target - num;
            while(l<=r){
                int m = (l+r)/2;
                if(numbers[m]==t) {
                    ans.push_back(i+1);
                    ans.push_back(m+1);
                    flag = true;
                    break;
                } else if(numbers[m]<t) {
                    l = m+1;
                } else {
                    r = m-1;
                }
            }
            if(flag) {
                break;
            }
        }
        return ans;
    }
};
