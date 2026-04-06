class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0,j = 0;
        for(int k =0; k<nums.size();k++){
            if(nums[k]==val){
                i = k;
                break;
            }
        }
        j = i+1;

      
      while(i<nums.size() && j<nums.size()){
        if(nums[i]==val && nums[j]!=val){
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            i++;
            j++;
       }
       if(nums[j]==val){
            j++;
       }
       if(nums[i]!=val){
         i++;
       }
      }
    return i;

    }
};