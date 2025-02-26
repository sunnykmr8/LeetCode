class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n=nums.size();
        int maxsum=nums[0];
        int currsum=nums[0];
        //Kanade Algorithm
        for(int i=1;i<n;i++){
            currsum=max(nums[i],currsum+nums[i]);
            maxsum=max(maxsum,currsum);
        }
        int minsum=nums[0];
        currsum=nums[0];

        for(int i=1;i<n;i++){
            currsum=min(nums[i],currsum+nums[i]);
            minsum=min(minsum,currsum);
        }
        return max(maxsum,abs(minsum));
    }
};