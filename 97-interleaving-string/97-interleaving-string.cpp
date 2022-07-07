class Solution {
  public:
    int dp[102][102];
  bool solve(string s1, string s2, string s3, int x, int y, int z) {
    if (x < 0 and y < 0 and z < 0) return true;
    if (x >= 0 and y >= 0 and dp[x][y] != -1) return dp[x][y];
    if (x >= 0 and s1[x] == s3[z] and y >= 0 and s2[y] == s3[z])
      return dp[x][y] = solve(s1, s2, s3, x - 1, y, z - 1) or solve(s1, s2, s3, x, y - 1, z - 1);
    else if (x >= 0 and s1[x] == s3[z])
      return solve(s1, s2, s3, x - 1, y, z - 1);
    else if (y >= 0 and s2[y] == s3[z])
      return solve(s1, s2, s3, x, y - 1, z - 1);
    else
      return false;
  }
  bool isInterleave(string s1, string s2, string s3) {
    memset(dp, -1, sizeof(dp));
    int x = s1.size(), y = s2.size(), z = s3.size();
    if (x + y != z) return false;
    return solve(s1, s2, s3, x - 1, y - 1, z - 1);
  }
};