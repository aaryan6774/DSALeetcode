class Solution {
public:
    int minTimeToType(string word) {
        int t = 0;
        char prev = 'a';
        for(char c : word)
        {
            int x = (c - prev + 26) % 26;
            int y  = (prev - c + 26) % 26;
            t+=min(x, y) + 1;
            prev = c;
        }
    return t;
}

};