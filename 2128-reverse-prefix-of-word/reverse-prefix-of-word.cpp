class Solution {
public:
    string reversePrefix(string word, char ch) {
       int i=0 ;
       while(i < word.size() && word[i] != ch)
       {
            i++;
       }
       if(i == 0 || i >= word.size()) return word;
       else reverse(word.begin(), word.begin() + i+1);
       
       return word;
    }
};