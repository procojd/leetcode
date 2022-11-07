class Solution {
public:
    void f(vector<vector<int>>& im, int sr, int sc, set<pair<int,int>> &s) {
        int m = im.size();
        int n = im[0].size();
        s.insert({sr,sc});
        if(s.size() == m * n) return;
        //4 conditions to check existence of 4 type of neighbour call
        if(sr > 0 && s.find({sr-1,sc}) == s.end() && im[sr-1][sc] == im[sr][sc]) f(im, sr-1, sc, s);
        if(sr+1 < m && s.find({sr+1,sc}) == s.end() &&im[sr+1][sc] == im[sr][sc]) f(im, sr+1, sc, s);
        if(sc > 0 && s.find({sr,sc-1}) == s.end() && im[sr][sc-1] == im[sr][sc]) f(im, sr, sc-1, s);
        if(sc+1 < n && s.find({sr,sc+1}) == s.end() && im[sr][sc+1] == im[sr][sc]) f(im, sr, sc+1, s);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& im, int sr, int sc, int col) {
        set<pair<int,int>> s; //to store all the pair of indices which are to be updated at last
        f(im, sr, sc, s);
        for(auto x : s) {
            im[x.first][x.second] = col;
        }
        return im;
    }
};
