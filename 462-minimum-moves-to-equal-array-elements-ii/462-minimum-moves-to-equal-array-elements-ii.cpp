
class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int n = nums.size();
        
        int mid = n / 2;
        int target = nums[mid];
        int moves = 0;
        for(int x : nums) {
            moves += abs(target - x);
        }
        
        return moves;
        
    }
};
// class Solution {
// public:
//     int minMoves2(vector<int>& nums) {
//         int n=nums.size();long long int sum=0,ans,fans=0;
//         float avg,diff,diff2=INT_MAX;
//         for(int i=0;i<n;i++)
//         {
//             sum+=nums[i];
//         }
//         avg=sum/n;
//         for(int i=0;i<n;i++)
//         {
//             diff=abs(nums[i]-avg);
//             if(diff<diff2)
//             {
//                 ans=nums[i];
//                 diff2=diff;
//             }
            
//         }
//         for(int i=0;i<n;i++)
//         {
//            fans+=abs(nums[i]-ans); 
//         }
//         return fans;
        
//     }
// };