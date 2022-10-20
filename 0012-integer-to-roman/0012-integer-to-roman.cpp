class Solution {
public:
string intToRoman(int num) {
string roman[]={"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
int number[]={1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

    int i=0; 
    string ans=""; 
    
    while(num > 0) 
    {
        if(number[i] <= num) 
        {
            int x; 
            x = num / number[i]; 
            
            while(x > 0) 
            {
                ans = ans + roman[i]; 
                x--; 
            } 
            
            num = num % number[i]; 
            i++; 
        } 
        else 
        {
          i++;   
        }
    } 
    
    return ans; 
}
};