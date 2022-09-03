class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue<pair<int,int>>pq;
        vector<int>ans;
        int count;
         for( int i=0;i<mat.size();i++){
             count =0;
             for( int j=0 ;j<mat[0].size();j++){
                 if(mat[i][j]==0)break;
                 count++;
             }
             pq.push({count,i});
             if(pq.size()>k)
                 pq.pop();
         }
        while(!pq.empty()){
           pair<int, int> top = pq.top();
            ans.push_back(top.second);
            pq.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};