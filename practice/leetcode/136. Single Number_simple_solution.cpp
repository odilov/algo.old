// https://leetcode.com/problems/single-number/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        sort( nums.begin(), nums.end(), [](int a , int b){ 
            return a < b;
        } );
        
        int ans = nums[0];
        int cnt = 1;
        
        for(int i = 1; i < (int)nums.size(); ++i){
            
            if( nums[i] == ans ) ++cnt;
            else if( cnt == 2 ) ans = nums[i] , cnt = 1;
            else if( cnt == 1 && nums[i] != ans )
                return ans;
    
        }
        
        return ans;
        
    }
};