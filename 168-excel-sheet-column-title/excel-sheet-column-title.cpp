class Solution {
public:
    string convertToTitle(int columnNumber) {
        // unordered_map(char, int) m;
        // m["A"] == 1;
        string result = "";
        while (columnNumber > 0)
        {
            columnNumber--;
            char c = columnNumber % 26 + 'A';
            result = c + result;
            columnNumber /= 26;
        }
        return result;
    }
};

/*
Example 3:

Input: columnNumber = 701
Output: "ZY"

701/ 26 = 26 26*26 = 676 -701 = 25
then ??? 26 * 
*/