class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        vector<vector<string>> ans;
        vector<vector<int>> temp;
        for(int i=0;i<n;i++) {
            string s = strs[i];
            vector<int> v(26,0);
            for(int j=0;j<s.length();j++) {
                v[s[j]-'a']++;
            }
            temp.push_back(v);
        }
        bool arr[n];
        for(int i=0;i<n;i++) {
            arr[i] = false;
        }
        for(int i=0;i<n;i++) {
            if(arr[i]) {
                continue;
            }
            vector<string> ans1;
            ans1.push_back(strs[i]);
            vector<int> v1 = temp[i];
            arr[i] = true;
            for(int j=i+1;j<n;j++) {
                if(arr[j]) {
                    continue;
                }
                vector<int> v2 = temp[j];
                bool flag = true;
                for(int k=0;k<26;k++) {
                    if(v1[k]!=v2[k]) {
                        flag = false;
                        break;
                    }
                }
                if(flag) {
                    arr[j] = true;
                    ans1.push_back(strs[j]);
                }
            }
            ans.push_back(ans1);
        }
        return ans;
    }
};
