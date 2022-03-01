class Solution {
public:
    bool isPalindrome(int x) {
     long long int reversed=0,original=x,i,r;
        if(x<0)
            return false;
     while(x>0)
     {
         r=x%10;
         reversed=reversed*10+r;
         x=x/10;
     }
        if(reversed==original)
            return true;
        return false;
    }
};
