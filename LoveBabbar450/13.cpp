class Solution {
  public:
    int maxSubarraySum(vector<int> &nums) {
        int ans = nums[0];
        int currSum = nums[0];

       for(int i = 1; i < nums.size(); i++){
        if(currSum < 0){
            currSum = nums[i];
        }else{
            currSum += nums[i];
        }
        ans = max(currSum, ans);
       }

        return ans;
    }
};