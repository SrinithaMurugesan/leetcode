class Solution {
public:
    int minimumSum(int num) {
        int d[4]; 
        for (int i = 0; i < 4; ++i) {
            d[i] = num % 10;
            num /= 10;
        }
        sort(d, d + 4); 
        int n1 = d[0] * 10 + d[2];
        int n2 = d[1] * 10 + d[3];
        return n1 + n2;
    }
};