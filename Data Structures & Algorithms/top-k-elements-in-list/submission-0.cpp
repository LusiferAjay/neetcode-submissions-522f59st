class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        int n = nums.size();
        for(int i=0;i<n;i++) {
            mp[nums[i]]=0;
        }
        for(int i=0;i<n;i++) {
            mp[nums[i]]++;
        }
        priority_queue<pair<int, int>> pq;
        for(auto &p: mp) {
            pq.push({p.second, p.first});
        }
        vector<int> ans;
        while(!pq.empty() && k!=0) {
            pair<int, int> p = pq.top();
            pq.pop();
            k--;
            ans.push_back(p.second);
        }
        return ans;
    }
};
