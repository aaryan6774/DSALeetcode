
class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string answer = "";
        int n = words.size();
        for(int i = 0; i<n; i++)
        {
            answer += words[i];
            if(answer == s) {
                return true;
                break;
            }
            
        }
        return false;
    }
};

/*
class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string ans = "";

        for(auto& word:words){
            ans += word;
            if(ans == s) return true;
            
        }
        return false;
    }
};
*/