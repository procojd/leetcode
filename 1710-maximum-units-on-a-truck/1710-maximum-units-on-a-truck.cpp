class Solution {

public:
    static bool sortcol( const vector<int> &v1, 
               const vector<int> &v2 ) { 
 return v1[1] < v2[1]; }
    
    
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int n=boxTypes.size();
        long long int ans=0;
        sort(boxTypes.begin(),boxTypes.end(),sortcol);
        for(int i=n-1;i>=0;i--)
        {
            if(truckSize>0)
            {
            if(truckSize-boxTypes[i][0]<0)
                ans+=truckSize*boxTypes[i][1];
            else(ans+=boxTypes[i][0]*boxTypes[i][1]);
                truckSize-=boxTypes[i][0];
            }
            else break;
            
                
        }
        return ans;
        
    }
};