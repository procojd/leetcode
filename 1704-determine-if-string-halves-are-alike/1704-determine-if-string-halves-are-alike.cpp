class Solution {
public:
    
    int count_vowel(string str)
    {
        int n = str.size();
        
        int count = 0;
        
        for(int i = 0; i < n; i++)
        {
            if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            {
                count++;
            }
        }
        
        return count;
    }
    
    bool is_alike(string a, string b)
    {
        return count_vowel(a) == count_vowel(b);
    }
    
    bool halvesAreAlike(string str) {
        
        int n = str.size();
        
        string a = "";
        
        string b = "";
        
        // divide the string into two equal parts
        
        for(int i = 0; i < n; i++)
        {
            if(i < n / 2)
            {
                a += str[i];
            }
            else
            {
                b += str[i];
            }
        }
        
        return is_alike(a, b);
    }
};