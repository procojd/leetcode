class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1)
            return s;
        int n=s.size();
        vector<string>a(numRows);
        int i=0;
        while(i<n){
            int r=0;
            while(r<numRows && i<n){
              a[r]+=string(1,(s[i++]));
                r++;
               }  
             r=numRows-2;
            while(r>0 && i<n){
              a[r]+=string(1,(s[i++]));
                 r--;
                }
            }
      s="";
     for(int i=0;i<numRows;i++)
            s+=a[i];
     return s;
    }
};