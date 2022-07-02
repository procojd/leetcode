class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        long long int diff1=0,diff2=0,ans;
        
        horizontalCuts.push_back(0);
        horizontalCuts.push_back(h);
        verticalCuts.push_back(0);
        verticalCuts.push_back(w);
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        
        for(int i=0;i<horizontalCuts.size()-1;i++)
        {
            int temp=horizontalCuts[i+1]-horizontalCuts[i];
            if(diff1<temp)
                diff1=temp;
        }
        for(int i=0;i<verticalCuts.size()-1;i++)
        {
            int temp=verticalCuts[i+1]-verticalCuts[i];
            if(diff2<temp)
                diff2=temp;
        }
        
        return (diff1*diff2)%1000000007;
        
    }
};