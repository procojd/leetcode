class Solution {
public:
    string minWindow(string s, string t) {
        int left=-1,right=-1;
        int l,r;
        unordered_map<char,queue<int>>map;
        for(char t1:t)
            map[t1].push(-1);
        
        vector<bool> pos(s.size(),false);
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            char c=s.at(i);
            if(map.find(c)==map.end())
                continue;
            
            if(count==0)
                l=i;
            if(map[c].front()==-1)
                count++; 
            else
                pos[map[c].front()]=false;
            
            pos[i]=true;
            map[c].pop();
            map[c].push(i);
            
            if(count>=t.size())
            {
                r=i;
                while(!pos[l])
                    l++;
                if(right==-1||right-left>r-l)
                {
                    right=r;
                    left=l;
                }
            }
        }
		
        return right==-1? "" : s.substr(left,right-left+1);
    }
};