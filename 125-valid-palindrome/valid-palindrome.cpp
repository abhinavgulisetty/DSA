class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        if(n == 1) return true;
        int left = 0;
        int right = n - 1;
        while(left < right){
            while(left < right && !isalnum(s[left])) left++;
            while(left < right && !isalnum(s[right])) right--;
            if(left>=right) break;
            if(tolower(s[left]) != tolower(s[right])){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};