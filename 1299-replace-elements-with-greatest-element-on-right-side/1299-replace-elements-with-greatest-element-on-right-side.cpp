class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
      int highest=-1;
        for(int i=arr.size()-1;i>=0;i--)
        {
            if(arr[i]>highest)
            {
                swap(highest,arr[i]);
                
            }
            else arr[i]=highest;
        }
        return arr;
    }
};