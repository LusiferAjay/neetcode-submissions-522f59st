class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        int i=0, j=n-1;
        bool flag = true;
        while(i<=j) {
            if(!iswalnum(s[i])){
                i++;
            } else if (!iswalnum(s[j])){
                j--;
            } else if(tolower(s[i])!=tolower(s[j])) {
                flag = false;
                break;
            } else {
                i++;
                j--;
            }
        }
        return flag;
    }
};
