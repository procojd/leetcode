class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
      priority_queue<int>ul;
        
        int i=0;
        for(i=0;i<heights.size()-1;i++)
        {
            int diff=heights[i+1]-heights[i];
            if(diff<=0)
                continue;
            bricks-=diff;
            
            ul.push(diff);
            if(bricks<0)
            {
                bricks+=ul.top();
                ul.pop();
                ladders--;
            }
            if(ladders<0)
                break;
            
        }
        return i;
    }
};