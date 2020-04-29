class Solution {
public:
    int calculatePow(int n) {
        int res = 0;
        while (n > 0) {
            res += pow(n % 10, 2.0);
            n /= 10;
        }
        return res;
    }
    
    bool isHappy(int n) {
        set<int> seen;
        int val = n;
        
        while (!(seen.find(val) != seen.end())) {
            seen.insert(val);
            val = calculatePow(val);
            
            if(val == 1) {
                return true;
            }
        }
        return false;
    }
};