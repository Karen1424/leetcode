//Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.

class Solution {
public:
    int addDigits(int num) {
        
        int sum = 0;
        std::vector<int> vec;
        while(num > 0)
        {
           sum += num % 10;
            num /= 10;
            if(num == 0 && sum > 9)
            {
                num = sum;
                sum = 0;
            }
        }
        return sum;
    }
};
