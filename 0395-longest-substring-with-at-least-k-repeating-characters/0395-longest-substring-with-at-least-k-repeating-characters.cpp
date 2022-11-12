class Solution {
public:
    int longestSubstring(string s, int k) {
	//  Base Conditions.
        int n=s.size();
        if(n==0||n<k)
            return 0;
        if(k==0)
            return n;
	// Storing Frequency of Each character.
        unordered_map<char,int>mp;
        for(int i=0;i<n;i++)
            mp[s[i]]++;
  // Finding a character whose Frequency is less than k .     
        int brk=0;
        while(brk<n&&mp[s[brk]]>=k)
            brk++;
 // If our brk reaches to n means every character has frequency >=k.
 // we got our result.
        if(brk==n)
            return n;
// breaking our string into two parts .
// And applying recursion.
        int left=longestSubstring(s.substr(0,brk),k);
// To Skip characters whose frequency is <k
        while(brk<n&&mp[s[brk]]<k)
            brk++;
        int right=longestSubstring(s.substr(brk),k);
// Analyzing which side has the longest string.
        return max(left,right);
    }
};