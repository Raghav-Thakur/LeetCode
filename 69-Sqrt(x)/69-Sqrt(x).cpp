class Solution {
public:
    int mySqrt(int x) {
        int s = 0, e = x, ans = -1;
        int mid = 0;
        while (s<=e) {
            mid = s + (e-s)/2;
            long long square  = (long long)mid*mid;
            if (square == x) {
                return mid;
4
