class Solution {
public:
    int characterReplacement(string s, int k) {
        
        int l = 0;
        int r = 0;
        int win = 1;
        int maxWin = win;
        int arr[26];
        while(l < 26) {
            arr[l++] = 0;
        }
        l = 0;
        int f = 0;
        while(r < s.length()) {
            ++arr[s[r] - 'A'];
            RIP:
            int j = 0;
            f = 0;
            while(j < 26) {
                if (arr[j] > f) f = arr[j];
                ++j;
            }
            
            if ((win - f) <= k) {
                ++r;
                ++win;
                maxWin = max(maxWin, win);
            } else {
                --arr[s[l] - 'A'];
                ++l;
                --win;
                goto RIP;
            }
        }
        
        return maxWin - 1;
        
    }
};