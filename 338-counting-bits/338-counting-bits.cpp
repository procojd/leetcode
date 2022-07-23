class Solution {
public:
    vector<int> countBits(int n) {
    int count;
       
    vector<int>vect(n+1,0);
        if(n==0)
            return vect;
    
        vect[0]=0;
        
    for(int i=1;i<vect.size();i++)
    {
        if(i%2==0)
            vect[i]=vect[i/2];
        else vect[i]=vect[i-1]+1;
        }
        return vect;
    }
};