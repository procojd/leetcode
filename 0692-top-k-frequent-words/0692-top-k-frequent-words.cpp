class Solution {
public:
    static bool comp(pair<int,string>a, pair<int,string>b){
        if(a.first== b.first){
            return a.second<b.second;
        }
        
        return a.first >b.first;
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        unordered_map<string,int>mp;
        for(auto j:words){
            mp[j]++;
        }
        
        vector<pair<int,string>>pq;
        
        for(auto i:mp){
            pq.push_back(make_pair(i.second, i.first));
        }
        sort(pq.begin(),pq.end(),comp);
        vector<string>ans;
        int i=0;
        while(k--){
            ans.push_back(pq[i].second);
            i++;
            
            
        }
        return ans;
        
    }
};