class Solution {
public:
    int mod=1e9+7;
    int numRollsToTarget(int n, int k, int T) {
        vector<int>prev(T+1,0);
        vector<int>curr(T+1,0);
        prev[0]=1;
        for(int i=1;i<=n;i++){
            for(int target =1;target <= T;target++){
                int ways=0;
                for(int j=1;j<=k;j++){
                    int curr=0;
                    if(target>=j)
                        curr= prev[target-j];
                    ways = (ways + curr)%mod;
                }
                curr[target] = ways;
            }
            prev=curr;
        }
        return prev[T];
    }
};