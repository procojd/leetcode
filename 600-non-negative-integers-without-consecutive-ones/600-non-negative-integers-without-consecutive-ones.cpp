class Solution {
public:
    static int findIntegers(int n_) {
        uint64_t n = n_;
        ++n;
        int ret = 0;
        uint64_t i = 1, a = 1, b = 1;
        if (n & (n >> 1)) {
            i = n & (n >> 1);
            i |= i >> 1;
            i |= i >> 2;
            i |= i >> 4;
            i |= i >> 8;
            i |= i >> 16;
            i &= ~i >> 1;
            for (auto j = i; j >>= 1;) {
                b += a;
                swap(a, b);
            }
        }
        for (; i <= n; i <<= 1) {
            if ((n & i) > 0)
                ret += a;
            b += a;
            swap(a, b);
        }
        return ret;
    }
};