class Solution {
public:                        
    vector<string> fizzBuzz(int n) {
        vector<string>v;
        string s1="FizzBuzz";
        string s2="Fizz";
        string s3="Buzz";
      for(int i=1;i<=n;i++)
      {
          if(i%3==0&&i%5==0)
              v.push_back(s1);
          else if(i%3==0)
              v.push_back(s2);
          else if(i%5==0)
              v.push_back(s3);
          else v.push_back(to_string(i));
      }
        return v;
    }
};