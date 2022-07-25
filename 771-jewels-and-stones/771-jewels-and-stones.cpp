class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        vector<int>dict(256,-1);
        int count=0;
        for(int i=0;i<jewels.size();i++)
        {
            dict[jewels[i]]=1;
        }
        for(int i=0;i<stones.size();i++)
        {
            if(dict[stones[i]]==1)
                count++;
        }
        return count;
    }
};