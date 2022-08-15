class Solution {
public:
    int romanToInt(string s) {
       int arr[26];
        arr['I'-'A']=1;
        arr['V'-'A']=5;
        arr['X'-'A']=10;
        arr['L'-'A']=50;
        arr['C'-'A']=100;
        arr['D'-'A']=500;
        arr['M'-'A']=1000;
        int count=arr[s[s.size()-1]-'A'];
        for(int i=s.size()-2;i>=0;i--)
        {
            if(arr[s[i]-'A']>=arr[s[i+1]-'A'])
            {
                count+=arr[s[i]-'A'];
            }
            else
                count-=arr[s[i]-'A'];
        }
        return count;
    }
};