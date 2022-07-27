class Solution {
public:

int calculate(string s) {
    istringstream in('+' + s + '+');
    long long ans = 0, num = 0, n;
    char op;
    while (in >> op) {
        if (op == '+' or op == '-') {
            ans += num;
            in >> num;
            num *= (op == '+' ? 1 : -1);
        } else {
            in >> n;
            if (op == '*')
                num *= n;
            else
                num /= n;
        }
    }
    return ans;
}
};