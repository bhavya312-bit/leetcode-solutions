class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size(),sum=0;
        int s=(n*(n+1))/2;
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
        }
        return s-sum;
        
    }
};