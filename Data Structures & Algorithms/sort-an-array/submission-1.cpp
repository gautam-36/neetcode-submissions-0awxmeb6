class Solution {
public:

    vector<int> merge(vector<int> left, vector<int> right){
        vector<int> ans;
        int i = 0, j = 0;

        while(i < left.size() && j < right.size()){
            if(left[i] <= right[j]){
                ans.push_back(left[i++]);
            } else {
                ans.push_back(right[j++]);
            }
        }

        while(i < left.size()) ans.push_back(left[i++]);
        while(j < right.size()) ans.push_back(right[j++]);

        return ans;
    }

    vector<int>devideAndMerge(vector<int>&nums, int start, int end){
        if(start==end){
            return {nums[start]};
        }
        int mid = (start + end)/2;

       vector<int> leftAns =  devideAndMerge(nums,start,mid);
       vector<int> rightAns = devideAndMerge(nums,mid+1,end);

        return merge(leftAns,rightAns);
    }

    vector<int> sortArray(vector<int>& nums) {
       return devideAndMerge(nums,0,nums.size()-1);
    }
};