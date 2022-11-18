class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& p, int k) {
        
        priority_queue<pair<int,vector<int>>> pq;
        for(int i=0;i<p.size();i++)
        {
            int x = p[i][0]*p[i][0] + p[i][1]*p[i][1];
            pq.push({x,p[i]});
            if(pq.size()>k)
                pq.pop();
        }
        
        vector<vector<int>> ans;
        
        while(!pq.empty())
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};