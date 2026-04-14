class Solution {
public:
    string encode(vector<string>& strs) {
        string ans = "";
        for(int i=0;i<strs.size();i++) {
            string s = strs[i];
            int n = s.length();
            ans+= to_string(n);
            ans+="#";
            ans+=s;
        }
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i=0;
        int n = s.length();
        while(i<n) {
            int num = 0;
            while(i<n && isdigit(s[i])) {
                num = num*10 + (s[i]-'0');
                i++;
            }
            i++;
            string str = "";
            while(i<n && num>0) {
                str+=s[i];
                i++;
                num--;
            }
            ans.push_back(str);
        }
        return ans;
    }
};
