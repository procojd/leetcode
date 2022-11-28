class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        vector<int>v(100001,0);
        vector<int>v1(100001,0);
        vector<int>win;
        vector<int>los;
        vector<vector<int>>ans;
        for(int i=0;i<matches.size();i++)
        {
            v[matches[i][0]]++;
            v1[matches[i][1]]++;
            
        }
        for(int i=0;i<v.size();i++)
        {
            if(v[i]>0&&v1[i]==0){
                win.push_back(i);
            }
            if(v1[i]==1)
            {los.push_back(i);
                
            }
        }
        ans.push_back(win);
        ans.push_back(los);
        return ans;
        
    }
};