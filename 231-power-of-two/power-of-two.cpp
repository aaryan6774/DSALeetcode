class Solution {
public:
    bool isPowerOfTwo(int n) {
       return ((n>0) && ((n&(n-1))==0)); 
    }
};
/*
class Solution {
public:
    bool isPowerOfTwo(int n) {
        int sum = 0;
        if(n == 1) return true;
        
        for(int i = 0; i <= n / 2; i++) {  
            sum = (1 << i);  
            if(sum == n) {
                return true;  
            }
        }
        return false;
        if(n<=0) return false;
        return ((n&(n-1))==0);
        // return ((n > 0) && ((n & (n - 1)) == 0));
    }
};
 */