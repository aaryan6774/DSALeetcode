class Solution {
public:
    int countEven(int num) {
        int cnt =0;
        int digit;
        int temp;
        for(int i = 1; i<=num; i++)
        {
            int sum = 0;
            temp = i;
            while(temp > 0)
            {
                digit = temp % 10;
                temp = temp/10;
                sum += digit;
            }
            if(sum %2 == 0)
            {
            cnt ++;
            }
        
        }
        return cnt;
    }
};