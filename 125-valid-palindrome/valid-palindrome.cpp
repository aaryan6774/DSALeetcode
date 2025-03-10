class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0;
        int n = s.size();
        int r = n - 1;
        while(l < r)
        {
            if(!isalnum(s[l]))
            {
                l++;
                // continue;
                // break;
            }
            else if(!isalnum(s[r]))
            {
                r--;
                // continue;
            }
            else if(tolower(s[l]) != tolower(s[r])) return false; // only bracket was missing
            else
            {
                l++;
                r--;
            }
        }
            return true;
        }
    
};
/*isalnum function in C++ is used to check if a character is alphanumeric,
 tolower() Function*/