class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
       vector<int>ans(nums.size()*2,0);
       
       for(int i = 0; i<2*nums.size();i++){
            
            if(i>=nums.size()){
                ans[i] = nums[i-nums.size()];
            }else{
                ans[i] = nums[i];
            }
       }

       return ans; 
    }
};