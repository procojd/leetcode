class Solution {
public:
    string convertToTitle(int columnNumber) {
    string res = "";
    while(columnNumber){
        int rem = columnNumber % 26;
        if(rem == 0) rem = 26;
        res += (char)(64 + rem);
        columnNumber -= rem;
        columnNumber /= 26;
    }
    reverse(res.begin(), res.end());
    return res;
}
};