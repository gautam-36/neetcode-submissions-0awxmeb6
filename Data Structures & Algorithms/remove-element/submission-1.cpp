class Solution {
public:

    void shiftElements(int ind, vector<int>&nums, bool &flag, int val){
    for(int i = ind; i<nums.size();i++){
        nums[i] = nums[i+1];
        if(val!=nums[i]){
            flag = true;
        }
    }
}
    int removeElement(vector<int>& nums, int val) {
     int count = 0;
     bool flag = false;
     for(int i =0; i<nums.size();i++){
        if(nums[i]==val){
            count++;
        }
     }
     for(int i = 0; i<nums.size();i++){
        if(nums[i]==val){
            shiftElements(i,nums,flag,val);
            if(!flag){
                break;
            }
            i--;
        }
        flag = false;
     }   
     return nums.size()-count;
    }
};