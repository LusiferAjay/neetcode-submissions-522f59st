class Solution {
public:
    bool isAnagram(string s, string t) {
        int arr[26] = {0};
        int brr[26] = {0};
        for(int i=0;i<s.length();i++) {
            arr[s[i]-'a']++;
        }
        for(int i=0;i<t.length();i++) {
            brr[t[i]-'a']++;
        }
        bool flag = true;
        for(int i=0;i<26;i++) {
            if(arr[i]!=brr[i]) {
                flag = false;
                break;
            }
        }
        return flag;
        
    }
};
