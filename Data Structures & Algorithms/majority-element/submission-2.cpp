class Solution {
public:
    int majorityElement(vector<int>& nums) {

      if(nums.size()==1) return nums[0];
        int ans = -1;
        map<int,int>mp;

        for(int i =0 ; i<nums.size();i++){
          auto it = mp.find(nums[i]);
          if(it != mp.end() && it->second>=nums.size()/2){
            ans =  it->first;
          }else{
            mp[nums[i]]++;
          }
        }
        return ans;
    }
};