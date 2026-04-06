class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mp;

        vector<int>ans(2,0);
        for(int i = 0; i<nums.size();i++){
            int temp = target - nums[i];
            auto it = mp.find(temp);
            if(it != mp.end()){
                ans[0] = it->second;
                ans[1] = i;
                return ans;
            }
            else{
                mp[nums[i]] = i;
            }
        }

        return ans;
    }
};
