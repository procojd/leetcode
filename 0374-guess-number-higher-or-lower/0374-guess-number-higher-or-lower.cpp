class Solution {
public:
    int guessNumber(int n) {
        int mid,i=1,j=n;
        int ans;
        while(i<j){
            mid=i+(j-i)/2;
            
            if(guess(mid)==0)
                return mid;
            else if(guess(mid)==1)
                i=mid+1;
            else
                j=mid-1;
        }
        return i;
    }
};