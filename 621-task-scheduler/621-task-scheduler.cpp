class Solution {
public:
        int cnt[26];
    int leastInterval(vector<char>& tasks, int n) {
     int mx=0;
        for (char c : tasks) cnt[c-'A']++;
        sort(cnt,cnt+26);
               int chunk=cnt[25]-1;
     int idle=chunk*n;
        for(int i=24;i>=0;i--)
        {
            idle-=min(chunk,cnt[i]);
        }
        if(idle<0)
        {
            return tasks.size();
        }
        else
        {
            return (tasks.size()+idle);
        }
        
    }
};